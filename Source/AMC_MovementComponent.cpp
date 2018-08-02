// Fill out your copyright notice in the Description page of Project Settings.

#include "AMC_MovementComponent.h"
#include "GameFramework/Character.h"
#include "Curves/CurveFloat.h"

UAMC_MovementComponent::UAMC_MovementComponent()
{
	JetpackForce = 1500.f;
	JetpackForwardMomentumScale = .5f;
	JetpackAccelerationMultiplier = 4.f;
	AirControl = .95;
	bAllowMantainingZVelocity = true;
	SprintSpeedMultiplier = 4.f;
	SprintAccelerationMultiplier = 4.f;
	MaintainZVelocityRate = .05f;
	MaxHoldJetpackTime = 1.f;
	MaxHoldSprintTime = 1.f;
	MaxXYVelocity = 4096;
	MaxZVelocity = 4096;

}

void UAMC_MovementComponent::UpdateFromCompressedFlags(uint8 Flags)
{
	Super::UpdateFromCompressedFlags(Flags);
	bWantsToSprint = (Flags&FSavedMove_Character::FLAG_Custom_0) != 0;
	bWantsToJetpack = (Flags&FSavedMove_Character::FLAG_Custom_1) != 0;
}

float UAMC_MovementComponent::GetMaxSpeed() const
{
	float MaxSpeed = Super::GetMaxSpeed();
	if (bWantsToSprint == true)
	{
		MaxSpeed *= SprintSpeedMultiplier;
	}
	return MaxSpeed;
}

float UAMC_MovementComponent::GetMaxAcceleration() const
{
	float MaxAcceleration = Super::GetMaxAcceleration();
	int count = 0;
	if (bSprintEnabled == true && bWantsToSprint == true)
	{
		count += 1;
		if (bSprintAccelerationCurve == true)
		{
			MaxAcceleration *= SprintAccelerationMultiplierCurve->GetFloatValue(SprintTimeHeldDown);
		}
		else
		{
			MaxAcceleration *= SprintAccelerationMultiplier;
		}
	}
	if (bJetpackEnabled == true && bWantsToJetpack == true)
	{
		count += 1;
		if (bJetpackAccelerationCurve == true)
		{
			MaxAcceleration *= JetpackAccelerationMultiplierCurve->GetFloatValue(JetpackTimeHeldDown);
		}
		else
		{
			MaxAcceleration *= JetpackAccelerationMultiplier;
		}
	}
	if (count > 0)
	{
		MaxAcceleration /= count;
	}
	return MaxAcceleration;
}

void UAMC_MovementComponent::OnMovementUpdated(float DeltaSeconds, const FVector & OldLocation, const FVector & OldVelocity)
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

	if (CanJetpack() == true && bWantsToJetpack == true)
	{
		JetpackTimeHeldDown = FMath::Clamp(JetpackTimeHeldDown + DeltaSeconds, 0.f, MaxHoldJetpackTime);
		if (bJetpackSpeedCurve)
		{
			float CurveValue = 0;
			CurveValue = JetpackForceCurve->GetFloatValue(JetpackTimeHeldDown);
			Velocity.Z += (CurveValue * DeltaSeconds);
			Velocity.Y += (MoveDirection.Y * CurveValue * DeltaSeconds) * JetpackForwardMomentumScale;
			Velocity.X += (MoveDirection.X * CurveValue * DeltaSeconds) * JetpackForwardMomentumScale;
		}
		else
		{
			Velocity.Z += (JetpackForce * DeltaSeconds);
			Velocity.Y += (MoveDirection.Y * JetpackForce * DeltaSeconds) * JetpackForwardMomentumScale;
			Velocity.X += (MoveDirection.X * JetpackForce * DeltaSeconds) * JetpackForwardMomentumScale;
		}
	}
	else
	{
		JetpackTimeHeldDown = 0;
	}
	if (CanSprint() == true && bWantsToSprint == true)
	{
		SprintTimeHeldDown = FMath::Clamp(SprintTimeHeldDown + DeltaSeconds, 0.f, MaxHoldSprintTime);
		if (bWantsToJetpack == false && bAllowMantainingZVelocity)
		{
			Velocity.Z = FMath::InterpEaseInOut(Velocity.Z, Velocity.Z * MaintainZVelocityRate, SprintTimeHeldDown, 2.0f);
		}
	}
	else
	{
		SprintTimeHeldDown = 0;
	}
	if (Velocity.X > MaxXYVelocity)
	{
		Velocity.X = MaxXYVelocity;
	}
	else if (Velocity.Y > MaxXYVelocity)
	{
		Velocity.Y = MaxXYVelocity;
	}
	else if (Velocity.Z > MaxZVelocity)
	{
		Velocity.Z = MaxZVelocity;
	}
	Super::OnMovementUpdated(DeltaSeconds, OldLocation, OldVelocity);
}

bool UAMC_MovementComponent::CanJetpack()
{
	//Allow for adding cooldowns or resources checks
	return (bJetpackEnabled);
}

void UAMC_MovementComponent::SetJetpacking(bool bIsJetpacking)
{
	bWantsToJetpack = bIsJetpacking;
}

float UAMC_MovementComponent::GetJetpackSpeed()
{
	if (bJetpackSpeedCurve)
	{
		return JetpackForceCurve->GetFloatValue(JetpackTimeHeldDown);
	}
	else
	{
		return JetpackForce;
	}
}

bool UAMC_MovementComponent::CanSprint()
{
	//Allow for adding cooldowns or resources checks
	return (bSprintEnabled);
}

void UAMC_MovementComponent::SetSprinting(bool bIsSprinting)
{
	bWantsToSprint = bIsSprinting;
}

float UAMC_MovementComponent::GetSprintingSpeed()
{
	return GetMaxSpeed();
}

void UAMC_MovementComponent::ServerSetMoveDirection_Implementation(const FVector& MoveDir)
{
	MoveDirection = MoveDir;
}

bool UAMC_MovementComponent::ServerSetMoveDirection_Validate(const FVector& MoveDir)
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
	UAMC_MovementComponent* CharMov = Cast<UAMC_MovementComponent>(Character->GetCharacterMovement());
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
	UAMC_MovementComponent* CharMov = Cast<UAMC_MovementComponent>(Character->GetCharacterMovement());
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

class FNetworkPredictionData_Client* UAMC_MovementComponent::GetPredictionData_Client() const
{
	check(PawnOwner != NULL);
	check(PawnOwner->Role < ROLE_Authority);

	if (!ClientPredictionData)
	{
		UAMC_MovementComponent* MutableThis = const_cast<UAMC_MovementComponent*>(this);

		MutableThis->ClientPredictionData = new FNetworkPredictionData_Client_AdvancedMovement(*this);
		MutableThis->ClientPredictionData->MaxSmoothNetUpdateDist = 92.f;
		MutableThis->ClientPredictionData->NoSmoothNetUpdateDist = 140.f;
	}
	return ClientPredictionData;
}

FSavedMovePtr FNetworkPredictionData_Client_AdvancedMovement::AllocateNewMove()
{
	return FSavedMovePtr(new FSavedMove_AdvancedMovement());
}
