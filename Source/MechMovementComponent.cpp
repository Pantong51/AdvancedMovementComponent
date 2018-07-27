// Fill out your copyright notice in the Description page of Project Settings.

#include "MechMovementComponent.h"
#include "../../../../../../../../EpicGames/Engines/UE_4.20/Engine/Source/Runtime/Engine/Classes/GameFramework/Character.h"
#include "UnrealMathUtility.h"
#include "Curves/CurveFloat.h"




UMechMovementComponent::UMechMovementComponent()
{
	//100% Change these defaults. They suck
	SprintSpeedMultiplier = 2;
	SprintAccelerationMultiplier = 2;
	JetpackSpeedMultiplier = 2;
	JetpackAccelerationMultiplier = 2;
}

void UMechMovementComponent::UpdateFromCompressedFlags(uint8 Flags)
{
	Super::UpdateFromCompressedFlags(Flags);
	bWantsToSprint = (Flags&FSavedMove_Character::FLAG_Custom_0) != 0;
	bWantsToJetpack = (Flags&FSavedMove_Character::FLAG_Custom_1) != 0;
}

class FNetworkPredictionData_Client* UMechMovementComponent::GetPredictionData_Client() const
{
	check(PawnOwner != NULL);
	check(PawnOwner->Role < ROLE_Authority);

	if (!ClientPredictionData)
	{
		UMechMovementComponent* MutableThis = const_cast<UMechMovementComponent*>(this);

		MutableThis->ClientPredictionData = new FNetworkPredictionData_Client_MyMovement(*this);
		MutableThis->ClientPredictionData->MaxSmoothNetUpdateDist = 92.f;
		MutableThis->ClientPredictionData->NoSmoothNetUpdateDist = 140.f;
	}

	return ClientPredictionData;
}

void UMechMovementComponent::SetJetpacking(bool bIsJetpacking)
{
	TimeJetpackHeldDown = 0;
	bWantsToJetpack = bIsJetpacking;
}

void UMechMovementComponent::ServerSetMoveDirection_Implementation(const FVector& MoveDir)
{
	MoveDirection = MoveDir;
}

bool UMechMovementComponent::ServerSetMoveDirection_Validate(const FVector& MoveDir)
{
	return true;
}

float UMechMovementComponent::GetMaxSpeed() const
{
	float MaxSpeed = Super::GetMaxSpeed();
	if (bWantsToSprint)
	{
		if (bSprintUseCurve)
		{
			MaxSpeed *= SprintAccelerationMultiplierCurve->GetFloatValue(FMath::Clamp(TimeSprintHeldDown, 0.f, 1.f));
		}
		else
		{
			MaxSpeed *= SprintSpeedMultiplier;
		}

	}
	return MaxSpeed;
}

float UMechMovementComponent::GetMaxAcceleration() const
{
	float MaxAccel = Super::GetMaxAcceleration();
	if (bWantsToSprint)
	{
		if (bSprintUseCurve)
		{
			MaxAccel *= SprintAccelerationMultiplierCurve->GetFloatValue(FMath::Clamp(TimeSprintHeldDown, 0.f, 1.f));
		}
		else
		{
			MaxAccel *= SprintAccelerationMultiplier;
		}
		
	}
	return MaxAccel;
}

void UMechMovementComponent::OnMovementUpdated(float DeltaSeconds, const FVector & OldLocation, const FVector & OldVelocity)
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
		if (bJetpackUseCurve)
		{
			TimeJetpackHeldDown += DeltaSeconds;
			Velocity.Z += JetpackSpeedMultiplierCurve->GetFloatValue(FMath::Clamp(TimeJetpackHeldDown, 0.f, 1.f)) * DeltaSeconds;
			Velocity.Y += ((MoveDirection.Y) * JetpackSpeedMultiplierCurve->GetFloatValue(FMath::Clamp(TimeJetpackHeldDown, 0.f, 1.f)) * DeltaSeconds) * JetpackForwardMomentumScale;
			Velocity.X += ((MoveDirection.X) * JetpackSpeedMultiplierCurve->GetFloatValue(FMath::Clamp(TimeJetpackHeldDown, 0.f, 1.f)) * DeltaSeconds) * JetpackForwardMomentumScale;
		}
		else
		{
			Velocity.Z += JetpackSpeedMultiplier * DeltaSeconds;
			Velocity.Y += (MoveDirection.Y) * JetpackForwardMomentumScale;
			Velocity.X += (MoveDirection.X) * JetpackForwardMomentumScale;
		}

	}
	else
	{
		TimeJetpackHeldDown = 0;
	}

	if (bWantsToSprint == true)
	{
		if (bSprintUseCurve)
		{
			TimeSprintHeldDown += DeltaSeconds;
		}
	}
	else
	{
		TimeSprintHeldDown = 0;
	}

	Super::OnMovementUpdated(DeltaSeconds, OldLocation, OldVelocity);

}

void UMechMovementComponent::SetSprinting(bool bIsSprinting)
{
	TimeSprintHeldDown = 0;
	bWantsToSprint = bIsSprinting;
}

void FSavedMove_MyMovement::Clear()
{
	Super::Clear();
	bSavedWantsToSprint = false;
	bSavedWantsToJetpack = false;
	SavedMoveDirection = FVector::ZeroVector;
	SavedJetPackTimeHeldDown = 0;
	SavedSprintTimeHeldDown = 0;
}

uint8 FSavedMove_MyMovement::GetCompressedFlags() const
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

bool FSavedMove_MyMovement::CanCombineWith(const FSavedMovePtr& NewMove, ACharacter* Character, float MaxDelta) const
{
	if (bSavedWantsToSprint != ((FSavedMove_MyMovement*)&NewMove)->bSavedWantsToSprint)
	{
		return false;
	}
	if (bSavedWantsToJetpack != ((FSavedMove_MyMovement*)&NewMove)->bSavedWantsToJetpack)
	{
		return false;
	}
	if (SavedJetPackTimeHeldDown != ((FSavedMove_MyMovement*)&NewMove)->SavedJetPackTimeHeldDown)
	{
		return false;
	}
	if (SavedSprintTimeHeldDown != ((FSavedMove_MyMovement*)&NewMove)->SavedSprintTimeHeldDown)
	{
		return false;
	}

	return Super::CanCombineWith(NewMove, Character, MaxDelta);
}

void FSavedMove_MyMovement::SetMoveFor(ACharacter* Character, float InDeltaTime, FVector const& NewAccel, class FNetworkPredictionData_Client_Character & ClientData)
{
	Super::SetMoveFor(Character, InDeltaTime, NewAccel, ClientData);
	UMechMovementComponent* CharMov = Cast<UMechMovementComponent>(Character->GetCharacterMovement());
	if (CharMov)
	{
		bSavedWantsToSprint = CharMov->bWantsToSprint;
		bSavedWantsToJetpack = CharMov->bWantsToJetpack;
		SavedJetPackTimeHeldDown = CharMov->TimeJetpackHeldDown;
		SavedSprintTimeHeldDown = CharMov->TimeSprintHeldDown;
	}
}

void FSavedMove_MyMovement::PrepMoveFor(ACharacter* Character)
{
	Super::PrepMoveFor(Character);
	UMechMovementComponent* CharMov = Cast<UMechMovementComponent>(Character->GetCharacterMovement());
	if (CharMov)
	{
		CharMov->TimeJetpackHeldDown = SavedJetPackTimeHeldDown;
		CharMov->TimeSprintHeldDown = SavedSprintTimeHeldDown;
	}

}

FNetworkPredictionData_Client_MyMovement::FNetworkPredictionData_Client_MyMovement(const UCharacterMovementComponent& ClientMovement) 
	: Super(ClientMovement)
{

}

FSavedMovePtr FNetworkPredictionData_Client_MyMovement::AllocateNewMove()
{
	return FSavedMovePtr(new FSavedMove_MyMovement());
}
