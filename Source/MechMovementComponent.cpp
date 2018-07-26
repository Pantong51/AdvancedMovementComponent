// Fill out your copyright notice in the Description page of Project Settings.

#include "MechMovementComponent.h"
#include "../../../../../../../../EpicGames/Engines/UE_4.20/Engine/Source/Runtime/Engine/Classes/GameFramework/Character.h"




UMechMovementComponent::UMechMovementComponent()
{
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
		MaxSpeed *= SprintSpeedMultiplier;
	}
	return MaxSpeed;
}

float UMechMovementComponent::GetMaxAcceleration() const
{
	float MaxAccel = Super::GetMaxAcceleration();
	if (bWantsToSprint)
	{
		MaxAccel *= SprintAccelerationMultiplier;
	}
	return MaxAccel;
}
//This function is called every tick from Preform movement in the base character movment class. This is a good spot for all custom logic related to movement goes to
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
		Velocity.Z += JetpackSpeedMultiplier * DeltaSeconds;
	}

	if (bWantsToSprint == true)
	{

	}
	Super::OnMovementUpdated(DeltaSeconds, OldLocation, OldVelocity);

}

void UMechMovementComponent::SetSprinting(bool bIsSprinting)
{
	bWantsToSprint = bIsSprinting;
}

void FSavedMove_MyMovement::Clear()
{
	Super::Clear();
	bSavedWantsToSprint = false;
	bSavedWantsToJetpack = false;
	SavedMoveDirection = FVector::ZeroVector;
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
	}
}

void FSavedMove_MyMovement::PrepMoveFor(ACharacter* Character)
{
	Super::PrepMoveFor(Character);
	UMechMovementComponent* CharMov = Cast<UMechMovementComponent>(Character->GetCharacterMovement());
	if (CharMov)
	{

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
