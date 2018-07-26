// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "MechMovementComponent.generated.h"

/*
========================================================================
Here's how player movement prediction, replication and correction works in network games:

Every tick, the TickComponent() function is called.  It figures out the acceleration and rotation change for the frame,
and then calls PerformMovement() (for locally controlled Characters), or ReplicateMoveToServer() (if it's a network client).

ReplicateMoveToServer() saves the move (in the PendingMove list), calls PerformMovement(), and then replicates the move
to the server by calling the replicated function ServerMove() - passing the movement parameters, the client's
resultant position, and a timestamp.

ServerMove() is executed on the server.  It decodes the movement parameters and causes the appropriate movement
to occur.  It then looks at the resulting position and if enough time has passed since the last response, or the
position error is significant enough, the server calls ClientAdjustPosition(), a replicated function.

ClientAdjustPosition() is executed on the client.  The client sets its position to the servers version of position,
and sets the bUpdatePosition flag to true.

When TickComponent() is called on the client again, if bUpdatePosition is true, the client will call
ClientUpdatePosition() before calling PerformMovement().  ClientUpdatePosition() replays all the moves in the pending
move list which occurred after the timestamp of the move the server was adjusting.
*/

// Bit masks used by GetCompressedFlags() to encode movement information.
//							FLAG_JumpPressed = 0x01,	// Jump pressed
//							FLAG_WantsToCrouch = 0x02,	// Wants to crouch
//							FLAG_Reserved_1 = 0x04,	// Reserved for future use
//							FLAG_Reserved_2 = 0x08,	// Reserved for future use
//							// Remaining bit masks are available for custom flags.
//							FLAG_Custom_0 = 0x10, //Sprinting
//							FLAG_Custom_1 = 0x20, //Jetpacking
//							FLAG_Custom_2 = 0x40, 
//							FLAG_Custom_3 = 0x80, 


UCLASS()
class COOP_MECH_API UMechMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()
public:
	UMechMovementComponent();
	//Define friend of custom movement saved class
	friend class FSavedMove_MyMovement;
	virtual void UpdateFromCompressedFlags(uint8 Flags) override;
	virtual class FNetworkPredictionData_Client* GetPredictionData_Client() const override;

	UPROPERTY(EditAnywhere, Category = "Sprint")
	float SprintSpeedMultiplier;

	UPROPERTY(EditAnywhere, Category = "Sprint")
	float SprintAccelerationMultiplier;

	//************************************
	// Method:    SetSprinting
	// FullName:  UMechMovementComponent::SetSprinting
	// Access:    public 
	// Returns:   void
	// Qualifier: Used to set the state of the sprint
	// Parameter: bool bIsSprinting
	//************************************
	void SetSprinting(bool bIsSprinting);

	uint8 bWantsToSprint : 1;
	
	UPROPERTY(EditAnywhere, Category = "Sprint")
	float JetpackSpeedMultiplier;

	UPROPERTY(EditAnywhere, Category = "Sprint")
	float JetpackAccelerationMultiplier;

	//************************************
	// Method:    SetJetpacking
	// FullName:  UMechMovementComponent::SetJetpacking
	// Access:    public 
	// Returns:   void
	// Qualifier: Used to set the state of the sprint
	// Parameter: bool bIsJetpacking
	//************************************
	void SetJetpacking(bool bIsJetpacking);

	uint8 bWantsToJetpack : 1;

	UFUNCTION(Unreliable, Server, WithValidation)
	void ServerSetMoveDirection(const FVector& MoveDir);

	virtual float GetMaxSpeed() const override;
	virtual float GetMaxAcceleration() const override;
	/**
	* Event triggered at the end of a movement update. If scoped movement updates are enabled (bEnableScopedMovementUpdates), this is within such a scope.
	* If that is not desired, bind to the CharacterOwner's OnMovementUpdated event instead, as that is triggered after the scoped movement update.
	*/
	virtual void OnMovementUpdated(float DeltaSeconds, const FVector & OldLocation, const FVector & OldVelocity) override;

	FVector MoveDirection;
};

/** FSavedMove_MyMovment comes from FSavedMove_Character and represents a saved move on the client that has been sent to the server and might need to be played back. */
class FSavedMove_MyMovement : public FSavedMove_Character
{
public:
	typedef FSavedMove_Character Super;
	virtual void Clear() override;
	virtual uint8 GetCompressedFlags() const override;
	virtual bool CanCombineWith(const FSavedMovePtr& NewMove, ACharacter* Character, float MaxDelta) const override;
	virtual void SetMoveFor(ACharacter* C, float InDeltaTime, FVector const& NewAccel, class FNetworkPredictionData_Client_Character & ClientData) override;
	virtual void PrepMoveFor(ACharacter* Character) override;

	uint8 bSavedWantsToSprint : 1;
	uint8 bSavedWantsToJetpack : 1;
	FVector SavedMoveDirection;
};
/** Get prediction data for a client game. Should not be used if not running as a client. Allocates the data on demand and can be overridden to allocate a custom override if desired. Result must be a FNetworkPredictionData_Client_Character. */
class FNetworkPredictionData_Client_MyMovement : public FNetworkPredictionData_Client_Character
{
public:
	FNetworkPredictionData_Client_MyMovement(const UCharacterMovementComponent& ClientMovement);
	typedef FNetworkPredictionData_Client_Character Super;
	virtual FSavedMovePtr AllocateNewMove() override;
};
