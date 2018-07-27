// Fill out your copyright notice in the Description page of Project Settings.

#include "AdvancedMovementComponent.h"
#include "GameFramework/Character.h"
#include "UnrealMathUtility.h"
#include "Curves/CurveFloat.h"




UAdvancedMovementComponent::UAdvancedMovementComponent()
{
	JetpackSpeedMultiplier = 1500.f;
	JetpackForwardMomentumScale = .5f;
	JetpackAccelerationMultiplier = 1500.f;
}

void UAdvancedMovementComponent::UpdateFromCompressedFlags(uint8 Flags)
{
	Super::UpdateFromCompressedFlags(Flags);
	bWantsToSprint = (Flags&FSavedMove_Character::FLAG_Custom_0) != 0;
	bWantsToJetpack = (Flags&FSavedMove_Character::FLAG_Custom_1) != 0;
}

class FNetworkPredictionData_Client* UAdvancedMovementComponent::GetPredictionData_Client() const
{
	check(PawnOwner != NULL);
	check(PawnOwner->Role < ROLE_Authority);

	if (!ClientPredictionData)
	{
		UAdvancedMovementComponent* MutableThis = const_cast<UAdvancedMovementComponent*>(this);

		MutableThis->ClientPredictionData = new FNetworkPredictionData_Client_AdvancedMovement(*this);
		MutableThis->ClientPredictionData->MaxSmoothNetUpdateDist = 92.f;
		MutableThis->ClientPredictionData->NoSmoothNetUpdateDist = 140.f;
	}
	return ClientPredictionData;
}

float UAdvancedMovementComponent::GetMaxSpeed() const
{
	float MaxSpeed = Super::GetMaxSpeed();
	if (bWantsToSprint == true)
	{
		MaxSpeed *= SprintSpeedMultiplier;
	}
	return MaxSpeed;
}

float UAdvancedMovementComponent::GetMaxAcceleration() const
{
	float MaxAcceleration = Super::GetMaxAcceleration();
	if (bWantsToSprint == true)
	{
		if (bSprintAccelerationCurve == true)
		{
			MaxAcceleration *= SprintAccelerationMultiplierCurve->GetFloatValue(SprintTimeHeldDown);
		}
		else
		{
			MaxAcceleration *= SprintAccelerationMultiplier;
		}
	}
	if (bWantsToJetpack == true)
	{
		if (bJetpackAccelerationCurve == true)
		{
			MaxAcceleration *= JetpackAccelerationMultiplierCurve->GetFloatValue(JetpackTimeHeldDown);
		}
		else
		{
			MaxAcceleration *= JetpackAccelerationMultiplier;
		}
	}
	return MaxAcceleration;
}

void UAdvancedMovementComponent::OnMovementUpdated(float DeltaSeconds, const FVector & OldLocation, const FVector & OldVelocity)
{
	if (!CharacterOwner)
	{
		return;
	}

	if (PawnOwner->IsLocallyControlled())
	{
		MoveDirection = PawnOwner->GetLastMovementInputVector();
		if (GetNetMode() == ENetMode::NM_Client)
		{
			ServerSetMoveDirection(MoveDirection);
		}
	}

	if (bWantsToJetpack == true)
	{
		JetpackTimeHeldDown = FMath::Clamp(JetpackTimeHeldDown + DeltaSeconds, 0.f, 1.f);
		if (bJetpackSpeedCurve)
		{
			float CurveValue = 0;
			CurveValue = JetpackSpeedMultiplierCurve->GetFloatValue(JetpackTimeHeldDown);
			Velocity.Z += (CurveValue * DeltaSeconds);
			Velocity.Y += (MoveDirection.Y * CurveValue * DeltaSeconds) * JetpackForwardMomentumScale;
			Velocity.X += (MoveDirection.X * CurveValue * DeltaSeconds) * JetpackForwardMomentumScale;
		}
		else
		{
			Velocity.Z += (JetpackSpeedMultiplier * DeltaSeconds);
			Velocity.Y += (MoveDirection.Y * JetpackSpeedMultiplier * DeltaSeconds) * JetpackForwardMomentumScale;
			Velocity.X += (MoveDirection.X * JetpackSpeedMultiplier * DeltaSeconds) * JetpackForwardMomentumScale;
		}

	}
	else
	{
		JetpackTimeHeldDown = 0;
	}
	if (bWantsToSprint == true)
	{
		SprintTimeHeldDown = FMath::Clamp(SprintTimeHeldDown + DeltaSeconds, 0.f, 1.f);
		if (bWantsToJetpack == false && bAllowMantainingZVelocity)
		{
			Velocity.Z *= MaintaintZVelocityRate;
		}
	}
	else
	{
		SprintTimeHeldDown = 0;
	}
	Super::OnMovementUpdated(DeltaSeconds, OldLocation, OldVelocity);
}

void UAdvancedMovementComponent::SetJetpacking(bool bIsJetpacking)
{
	bWantsToJetpack = bIsJetpacking;
}

void UAdvancedMovementComponent::SetSprinting(bool bIsSprinting)
{
	bWantsToSprint = bIsSprinting;
}

void UAdvancedMovementComponent::ServerSetMoveDirection_Implementation(const FVector& MoveDir)
{
	MoveDirection = MoveDir;
}

bool UAdvancedMovementComponent::ServerSetMoveDirection_Validate(const FVector& MoveDir)
{
	return true;
}

void FSavedMove_AdvancedMovement::Clear()
{
	Super::Clear();
	bSavedWantsToSprint = false;
	bSavedWantsToJetpack = false;
	SavedMoveDirection = FVector::ZeroVector;
	SavedSprintTimeHelodDown = 0.f;
	SavedJetpackTimeHeldDown = 0.f;
}

uint8 FSavedMove_AdvancedMovement::GetCompressedFlags() const
{
	uint8 Result = Super::GetCompressedFlags();
	if (bSavedWantsToSprint)
	{
		Result |= FLAG_Custom_0;
	}
	if (bSavedWantsToJetpack)
	{
		Result |= FLAG_Custom_1;
	}
	return Result;
}

bool FSavedMove_AdvancedMovement::CanCombineWith(const FSavedMovePtr& NewMove, ACharacter* Character, float MaxDelta) const
{
	if (bSavedWantsToSprint != ((FSavedMove_AdvancedMovement*)&NewMove)->bSavedWantsToSprint)
	{
		return false;
	}
	if (bSavedWantsToJetpack != ((FSavedMove_AdvancedMovement*)&NewMove)->bSavedWantsToJetpack)
	{
		return false;
	}
	return Super::CanCombineWith(NewMove, Character, MaxDelta);
}

void FSavedMove_AdvancedMovement::SetMoveFor(ACharacter* Character, float InDeltaTime, FVector const& NewAccel, class FNetworkPredictionData_Client_Character & ClientData)
{
	Super::SetMoveFor(Character, InDeltaTime, NewAccel, ClientData);
	UAdvancedMovementComponent* CharMov = Cast<UAdvancedMovementComponent>(Character->GetCharacterMovement());
	if (CharMov)
	{
		bSavedWantsToSprint = CharMov->bWantsToSprint;
		bSavedWantsToJetpack = CharMov->bWantsToJetpack;
		SavedMoveDirection = CharMov->MoveDirection;
		SavedJetpackTimeHeldDown = CharMov->JetpackTimeHeldDown;
		SavedSprintTimeHelodDown = CharMov->SprintTimeHeldDown;
	}
}

void FSavedMove_AdvancedMovement::PrepMoveFor(ACharacter* Character)
{
	Super::PrepMoveFor(Character);
	UAdvancedMovementComponent* CharMov = Cast<UAdvancedMovementComponent>(Character->GetCharacterMovement());
	if (CharMov)
	{
		CharMov->MoveDirection = SavedMoveDirection;
		CharMov->bWantsToJetpack = bSavedWantsToJetpack;
		CharMov->bWantsToSprint = bSavedWantsToSprint;
		CharMov->SprintTimeHeldDown = SavedSprintTimeHelodDown;
		CharMov->JetpackTimeHeldDown = SavedJetpackTimeHeldDown;

	}
}

FNetworkPredictionData_Client_AdvancedMovement::FNetworkPredictionData_Client_AdvancedMovement(const UCharacterMovementComponent& ClientMovement)
	: Super(ClientMovement)
{

}

FSavedMovePtr FNetworkPredictionData_Client_AdvancedMovement::AllocateNewMove()
{
	return FSavedMovePtr(new FSavedMove_AdvancedMovement());
}
