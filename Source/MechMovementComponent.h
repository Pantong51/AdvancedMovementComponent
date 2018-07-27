// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Curves/CurveFloat.h"
#include "AdvancedMovementComponent.generated.h"

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
UENUM(BlueprintType)
enum class EFuelResourceMode : uint8
{
	NoResourceCost UMETA(DisplayName = "NoResourceCost"),
	SprintCost UMETA(DisplayName = "SprintCost"),
	JetpackCost UMETA(DisplayName = "JetpackCost"),
	BothCost UMETA(DisplayName = "BothCost")
};

UCLASS()
class AMC_API UAdvancedMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()
public:
	UAdvancedMovementComponent();
	friend class FSavedMove_AdvancedMovement;
	virtual void UpdateFromCompressedFlags(uint8 Flags) override;
	virtual class FNetworkPredictionData_Client* GetPredictionData_Client() const override;
	UFUNCTION(Unreliable, Server, WithValidation)
	void ServerSetMoveDirection(const FVector& MoveDir);
	virtual float GetMaxSpeed() const override;
	virtual float GetMaxAcceleration() const override;
	/**
	* Event triggered at the end of a movement update. If scoped movement updates are enabled (bEnableScopedMovementUpdates), this is within such a scope.
	* If that is not desired, bind to the CharacterOwner's OnMovementUpdated event instead, as that is triggered after the scoped movement update.
	*/
	virtual void OnMovementUpdated(float DeltaSeconds, const FVector & OldLocation, const FVector & OldVelocity) override;	

	uint8 bWantsToSprint : 1;
	uint8 bWantsToJetpack : 1;
	FVector MoveDirection;

	void SetJetpacking(bool bIsJetpacking);
	void SetSprinting(bool bIsSprinting);

	UPROPERTY(EditAnywhere, Category = "Sprint", AdvancedDisplay, meta = (EditCondition = "!bSprintSpeedCurve"))
	float SprintSpeedMultiplier;
	UPROPERTY(EditAnywhere, Category = "Sprint", AdvancedDisplay, meta = (EditCondition = "!bSprintAccelearationCurve"))
	float SprintAccelerationMultiplier;
	UPROPERTY(EditAnywhere, Category = "Sprint", AdvancedDisplay, meta = (EditCondition = "!bSprintResourceCurve"))
	float SprintResourceCost;
	UPROPERTY(EditAnywhere, Category = "Sprint", AdvancedDisplay, meta = (EditCondition = "bSprintSpeedCurve"))
	UCurveFloat* SprintSpeedMultiplierCurve;
	UPROPERTY(EditAnywhere, Category = "Sprint", AdvancedDisplay, meta = (EditCondition = "bSprintAccelerationCurve"))
	UCurveFloat* SprintAccelerationMultiplierCurve;
	UPROPERTY(EditAnywhere, Category = "Sprint", AdvancedDisplay, meta = (EditCondition = "bSprintResourceCurve"))
	UCurveFloat* SprintResourceCostCurve;
	//Use a float curve for max speed
	UPROPERTY(EditAnywhere, Category = "Sprint")
	bool bSprintSpeedCurve;
	//Use a float curve for acceleration
	UPROPERTY(EditAnywhere, Category = "Sprint")
	bool bSprintAccelerationCurve;
	//Use a float curve for sprints resources
	UPROPERTY(EditAnywhere, Category = "Sprint")
	bool bSprintResourceCurve;
	//Sprint will use the grouped resources if checked
	UPROPERTY(EditAnywhere, Category = "Sprint")
	bool bSprintUseGroupedResources;
	//Used to keep from reactivation 0 = no cooldown
	UPROPERTY(EditAnywhere, Category = "Sprint", meta = (ClampMin = 0))
	float SprintReactivateCooldown;
	//Scales the cost of resources in air
	UPROPERTY(EditAnywhere, Category = "Sprint")
	float SprintAirResourceScale;
	//Scales the effects of sprint in air
	UPROPERTY(EditAnywhere, Category = "Sprint")
	float SprintAirScale; 
	UPROPERTY(EditAnywhere, Category = "Sprint")
	bool bAllowMantainingZVelocity;
	//Value between 0-1, used to "soften" zVelocity changes when spriting
	UPROPERTY(EditAnywhere, Category = "Sprint", meta = (ClampMin = 0, ClampMax = 1))
	float MaintaintZVelocityRate;

	float SprintTimeHeldDown;

	UPROPERTY(EditAnywhere, Category = "Jetpack", AdvancedDisplay, meta = (EditCondition = "!bJetpackSpeedCurve"))
	float JetpackSpeedMultiplier;
	UPROPERTY(EditAnywhere, Category = "Jetpack", AdvancedDisplay, meta = (EditCondition = "!bJetpackAccelearationCurve"))
	float JetpackAccelerationMultiplier;
	UPROPERTY(EditAnywhere, Category = "Jetpack", AdvancedDisplay, meta = (EditCondition = "!bJetpackResourceCurve"))
	float JetpackResourceCost;
	UPROPERTY(EditAnywhere, Category = "Jetpack", AdvancedDisplay, meta = (EditCondition = "bJetpackSpeedCurve"))
	UCurveFloat* JetpackSpeedMultiplierCurve;
	UPROPERTY(EditAnywhere, Category = "Jetpack", AdvancedDisplay, meta = (EditCondition = "bJetpackAccelerationCurve"))
	UCurveFloat* JetpackAccelerationMultiplierCurve;
	UPROPERTY(EditAnywhere, Category = "Jetpack", AdvancedDisplay, meta = (EditCondition = "bJetpackResourceCurve"))
	UCurveFloat* JetpackResourceCostCurve;
	//Use a float curve for max speed
	UPROPERTY(EditAnywhere, Category = "Jetpack")
	bool bJetpackSpeedCurve;
	//Use a float curve for acceleration
	UPROPERTY(EditAnywhere, Category = "Jetpack")
	bool bJetpackAccelerationCurve;
	//Use a float curve for Jetpacks resources
	UPROPERTY(EditAnywhere, Category = "Jetpack")
	bool bJetpackResourceCurve;
	//Jetpack will use the grouped resources if checked
	UPROPERTY(EditAnywhere, Category = "Jetpack")
	bool bJetpackUseGroupedResources;
	//Used to keep from reactivation 0 = no cooldown
	UPROPERTY(EditAnywhere, Category = "Jetpack", meta=(ClampMin=0))
	float JetpackReactivateCooldown;
	//Scales the cost of resources in air
	UPROPERTY(EditAnywhere, Category = "Jetpack")
	float JetpackAirResourceScale;
	//Scales the effects of Jetpack in air
	UPROPERTY(EditAnywhere, Category = "Jetpack")
	float JetpackAirScale;
	//Sets how much Vecloity.x and Vecloity.y the jetpack adds too 0 being none 1 being full -1 would be removing .x and .y
	UPROPERTY(EditAnywhere, Category = "Jetpack")
	float JetpackForwardMomentumScale;

	float JetpackTimeHeldDown;

	//How you want resources to be used
	UPROPERTY(EditAnywhere, Category = "Resource")
	EFuelResourceMode ResourceMode;
	//Dont use resources on ground
	UPROPERTY(EditAnywhere, Category = "Resource")
	bool bUseResourceOnGround;


};

/** FSavedMove_MyMovment comes from FSavedMove_Character and represents a saved move on the client that has been sent to the server and might need to be played back. */
class FSavedMove_AdvancedMovement : public FSavedMove_Character
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
	float SavedJetpackTimeHeldDown;
	float SavedSprintTimeHelodDown;

};

/** Get prediction data for a client game. Should not be used if not running as a client. Allocates the data on demand and can be overridden to allocate a custom override if desired. Result must be a FNetworkPredictionData_Client_Character. */
class FNetworkPredictionData_Client_AdvancedMovement : public FNetworkPredictionData_Client_Character
{
public:
	FNetworkPredictionData_Client_AdvancedMovement(const UCharacterMovementComponent& ClientMovement);
	typedef FNetworkPredictionData_Client_Character Super;
	virtual FSavedMovePtr AllocateNewMove() override;
};