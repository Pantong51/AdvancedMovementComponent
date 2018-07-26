// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "MechMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class COOP_MECH_API UMechMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()
public:
	UMechMovementComponent();
	friend class FSavedMove_MyMovement;
	virtual void UpdateFromCompressedFlags(uint8 Flags) override;
	virtual class FNetworkPredictionData_Client* GetPredictionData_Client() const override;

#pragma region Sprinting
	UPROPERTY(EditAnywhere, Category = "Sprint")
	float SprintSpeedMultiplier;

	UPROPERTY(EditAnywhere, Category = "Sprint")
	float SprintAccelerationMultiplier;

	void SetSprinting(bool bIsSprinting);
	uint8 bWantsToSprint : 1;
#pragma endregion Sprinting

#pragma region Jetpacking
	UPROPERTY(EditAnywhere, Category = "Sprint")
	float JetpackSpeedMultiplier;

	UPROPERTY(EditAnywhere, Category = "Sprint")
	float JetpackAccelerationMultiplier;

	void SetJetpacking(bool bIsJetpacking);
	uint8 bWantsToJetpack : 1;

#pragma endregion Jetpacking

	UFUNCTION(Unreliable, Server, WithValidation)
	void ServerSetMoveDirection(const FVector& MoveDir);

	virtual float GetMaxSpeed() const override;
	virtual float GetMaxAcceleration() const override;
	virtual void OnMovementUpdated(float DeltaSeconds, const FVector & OldLocation, const FVector & OldVelocity) override;

	FVector MoveDirection;
	//OnMovementUpdated Do Energy cost + jetpack movement


};

class FSavedMove_MyMovement : public FSavedMove_Character
{
public:
	typedef FSavedMove_Character Super;
	virtual void Clear() override;
	virtual uint8 GetCompressedFlags() const override;
	virtual bool CanCombineWith(const FSavedMovePtr& NewMove, ACharacter* Character, float MaxDelta) const override;
	virtual void SetMoveFor(ACharacter* C, float InDeltaTime, FVector const& NewAccel, class FNetworkPredictionData_Client_Character & ClientData) override;
	virtual void PrepMoveFor(ACharacter* Character) override;

#pragma region Sprinting
	uint8 bSavedWantsToSprint : 1;
#pragma endregion Sprinting
#pragma region Jetpack
	uint8 bSavedWantsToJetpack : 1;
#pragma endregion Jetpack
	FVector SavedMoveDirection;
};

class FNetworkPredictionData_Client_MyMovement : public FNetworkPredictionData_Client_Character
{
public:
	FNetworkPredictionData_Client_MyMovement(const UCharacterMovementComponent& ClientMovement);
	typedef FNetworkPredictionData_Client_Character Super;
	virtual FSavedMovePtr AllocateNewMove() override;
};