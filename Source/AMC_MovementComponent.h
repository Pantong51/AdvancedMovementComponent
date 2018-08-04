// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Curves/CurveFloat.h"
#include "AMC.h"
#include "AMC_MovementComponent.generated.h"

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
//							FLAG_Custom_0 = 0x10, // Sprinting
//							FLAG_Custom_1 = 0x20, // Jetpacking
//							FLAG_Custom_2 = 0x40, // Quick Dodge
//							FLAG_Custom_3 = 0x80, // Wall Running

UCLASS()
class AMC_API UAMC_MovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()
public:
	UAMC_MovementComponent();
	friend class FSavedMove_AdvancedMovement;
	virtual void UpdateFromCompressedFlags(uint8 Flags) override;
	virtual class FNetworkPredictionData_Client* GetPredictionData_Client() const override;
	UFUNCTION(Unreliable, Server, WithValidation)
	void ServerSetMoveDirection(const FVector& MoveDir);
	virtual float GetMaxSpeed() const override;
	virtual float GetMaxAcceleration() const override;
	virtual bool DoJump(bool bReplayingMoves) override;
	virtual void ProcessLanded(const FHitResult& Hit, float remainingTime, int32 Iterations) override;
	/**
	* Event triggered at the end of a movement update. If scoped movement updates are enabled (bEnableScopedMovementUpdates), this is within such a scope.
	* If that is not desired, bind to the CharacterOwner's OnMovementUpdated event instead, as that is triggered after the scoped movement update.
	*/
	virtual void OnMovementUpdated(float DeltaSeconds, const FVector & OldLocation, const FVector & OldVelocity) override;

	uint8 bWantsToSprint : 1;
	uint8 bWantsToJetpack : 1;
	uint8 bWantsToDodge : 1;
	uint8 bWantsToWallRun : 1;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FVector MoveDirection;

	//************************************
	// Method:    CanJump
	// FullName:  UAMC_MovementComponent::CanJump
	// Access:    public 
	// Returns:   bool
	// Qualifier: Checks if can jump
	//************************************
	bool CanJump();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AMC|Config")
	bool bNeedToJumpBeforeJetpack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AMC|Config")
	int32 JumpCount;

	//************************************
	// Method:    CanJetpack
	// FullName:  UAMC_MovementComponent::CanJetpack
	// Access:    public 
	// Returns:   bool
	// Qualifier: Checks if the movement component should activate Jetpack
	//************************************
	UFUNCTION(BlueprintCallable, Category = "AMC|Checks")
	virtual bool CanJetpack() const;

	void SetJetpackEnabled(bool bIsJetpackEnabled);

	//************************************
	// Method:    GetIsJetpacking
	// FullName:  UAMC_MovementComponent::GetIsJetpacking
	// Access:    public 
	// Returns:   bool
	// Qualifier: true if currently jetpacking
	//************************************
	UFUNCTION(BlueprintCallable, Category = "AMC|Checks")
	bool GetIsJetpacking() const;

	void SetJetpacking(bool bIsJetpacking);
	//Gets Jetpack Speed
	UFUNCTION(BlueprintCallable)
	float GetJetpackSpeed();

	//************************************
	// Method:    CanSprint
	// FullName:  UAMC_MovementComponent::CanSprint
	// Access:    public 
	// Returns:   bool
	// Qualifier: Checks if the movement component should activate Sprint
	//************************************
	UFUNCTION(BlueprintCallable, Category = "AMC|Checks")
	virtual bool CanSprint() const;

	void SetSprintEnabled(bool bIsSprintEnabled);

	//************************************
	// Method:    GetIsSprinting
	// FullName:  UAMC_MovementComponent::GetIsSprinting
	// Access:    public 
	// Returns:   bool
	// Qualifier: true if currently sprinting
	//************************************
	UFUNCTION(BlueprintCallable, Category = "AMC|Checks")
	bool GetIsSprinting() const;

	void SetSprinting(bool bIsSprinting);
	//Gets Sprint Speed
	UFUNCTION(BlueprintCallable)
	float GetSprintingSpeed();
	//Sets can dodge
	UFUNCTION(BlueprintCallable)
	virtual bool CanDodge() const;

	//************************************
	// Method:    EnableDodge
	// FullName:  UAMC_MovementComponent::EnableDodge
	// Access:    public 
	// Returns:   void
	// Qualifier: Enable/Disable Dodge
	// Parameter: bIsDodgeEnabled
	//************************************
	UFUNCTION(BlueprintCallable)
	void EnableDodge(bool bIsDodgeEnabled);
	bool bDodgeEnabled;

	void DoDodge();

	UPROPERTY(EditAnywhere, Category = "Sprint", AdvancedDisplay, meta = (EditCondition = "!bSprintSpeedCurve"))
	float SprintSpeedMultiplier;
	UPROPERTY(EditAnywhere, Category = "Sprint", AdvancedDisplay, meta = (EditCondition = "!bSprintAccelearationCurve"))
	float SprintAccelerationMultiplier;
	UPROPERTY(EditAnywhere, Category = "Sprint", AdvancedDisplay, meta = (EditCondition = "bSprintSpeedCurve"))
	UCurveFloat* SprintSpeedMultiplierCurve;
	UPROPERTY(EditAnywhere, Category = "Sprint", AdvancedDisplay, meta = (EditCondition = "bSprintAccelerationCurve"))
	UCurveFloat* SprintAccelerationMultiplierCurve;
	//Is Sprint Enabled
	UPROPERTY(EditAnywhere, Category = "Sprint")
	bool bSprintEnabled;
	//Use a float curve for max speed
	UPROPERTY(EditAnywhere, Category = "Sprint")
	bool bSprintSpeedCurve;
	//Use a float curve for acceleration
	UPROPERTY(EditAnywhere, Category = "Sprint")
	bool bSprintAccelerationCurve;
	//Scales the effects of sprint in air
	UPROPERTY(EditAnywhere, Category = "Sprint")
	bool bAllowMantainingZVelocity;
	UPROPERTY(EditAnywhere, Category = "Sprint")
	bool bAllowMantainingXYVelocity;
	//Value between 0-1, used to "soften" zVelocity changes when sprinting in air
	UPROPERTY(EditAnywhere, Category = "Sprint", meta = (ClampMin = 0, ClampMax = 1))
	float MaintainZVelocityRate;
	UPROPERTY(EditAnywhere, Category = "Sprint", meta = (ClampMin = 0, ClampMax = 1))
	float MaintainXYVelocityRate;
	//Max hold time on sprint
	UPROPERTY(EditAnywhere, Category = "Sprint", meta = (ClampMin = 0))
	float MaxHoldSprintTime;
	bool bIsSprinting;

	float SprintTimeHeldDown;

	UPROPERTY(EditAnywhere, Category = "Jetpack", AdvancedDisplay, meta = (EditCondition = "!bJetpackSpeedCurve"))
	float JetpackForce;
	UPROPERTY(EditAnywhere, Category = "Jetpack", AdvancedDisplay, meta = (EditCondition = "!bJetpackAccelearationCurve"))
	float JetpackAccelerationMultiplier;
	UPROPERTY(EditAnywhere, Category = "Jetpack", AdvancedDisplay, meta = (EditCondition = "bJetpackSpeedCurve"))
	UCurveFloat* JetpackForceCurve;
	UPROPERTY(EditAnywhere, Category = "Jetpack", AdvancedDisplay, meta = (EditCondition = "bJetpackAccelerationCurve"))
	UCurveFloat* JetpackAccelerationMultiplierCurve;
	//Is Jetpack Enabled
	UPROPERTY(EditAnywhere, Category = "Jetpack")
	bool bJetpackEnabled;
	//Use a float curve for max speed
	UPROPERTY(EditAnywhere, Category = "Jetpack")
	bool bJetpackSpeedCurve;
	//Use a float curve for acceleration
	UPROPERTY(EditAnywhere, Category = "Jetpack")
	bool bJetpackAccelerationCurve;
	//Scales the cost of resources in air
	UPROPERTY(EditAnywhere, Category = "Jetpack")
	float JetpackAirScale;
	//Sets how much Vecloity.x and Vecloity.y the jetpack has, setting to value too high will exponentially increase X and Y Speed
	UPROPERTY(EditAnywhere, Category = "Jetpack")
	float JetpackForwardMomentumScale;
	//Max hold time on jetpack
	UPROPERTY(EditAnywhere, Category = "Jetpack", meta = (ClampMin = 0))
	float MaxHoldJetpackTime;
	bool bIsJetpacking;

	float JetpackTimeHeldDown;

	//Strength of a Dodge
	UPROPERTY(EditAnywhere, Category = "QuickDodge")
	float DodgeStrength;
	//Multiplier Addative to a Dodge
	UPROPERTY(EditAnywhere, Category = "QuickDodge")
	float DodgeAirStrength;
	UPROPERTY(EditAnywhere, Category = "QuickDodge", AdvancedDisplay, meta = (EditCondition = "bDodgeCurve"))
	UCurveFloat* DodgeStrengthCurve;
	//Use curve isntead of float for dodge
	UPROPERTY(EditAnywhere, Category = "QuickDodge")
	bool bDodgeCurve;
	//How long the dodge should execute
	UPROPERTY(EditAnywhere, Category = "QuickDodge")
	float MaxDodgeDurration;
	//Boost up if on ground
	UPROPERTY(EditAnywhere, Category = "QuickDodge")
	float GroundZUp;

	bool bIsDodging;
	float DodgeDurration;

	UPROPERTY(EditAnywhere, Category = "AMC|Config")
	float MaxXYVelocity;
	UPROPERTY(EditAnywhere, Category = "AMC|Config")
	float MaxZVelocity;

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
	uint8 bSavedWantsToDodge : 1;
	uint8 bSavedWantsToWallRun : 1;
	FVector SavedMoveDirection;
	float SavedJetpackTimeHeldDown;
	float SavedSprintTimeHelodDown;
	int SavedJumpCount;
	float SavedDodgeTime;

};

/** Get prediction data for a client game. Should not be used if not running as a client. Allocates the data on demand and can be overridden to allocate a custom override if desired. Result must be a FNetworkPredictionData_Client_Character. */
class FNetworkPredictionData_Client_AdvancedMovement : public FNetworkPredictionData_Client_Character
{
public:
	FNetworkPredictionData_Client_AdvancedMovement(const UCharacterMovementComponent& ClientMovement);
	typedef FNetworkPredictionData_Client_Character Super;
	virtual FSavedMovePtr AllocateNewMove() override;
};