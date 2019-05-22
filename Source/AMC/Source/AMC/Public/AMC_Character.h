// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AMC_Character.generated.h"

UCLASS()
class AMC_API AAMC_Character : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAMC_Character(const FObjectInitializer& ObjectInitializer);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	//************************************
	// Method:    StartJetpack
	// FullName:  AAdvancedMovementCharacter::StopJetpack
	// Access:    public 
	// Returns:   void
	// Qualifier: Used to set the state of the jetpack
	//************************************
	UFUNCTION(BlueprintCallable, Category = "Jetpack")
	void StartJetpack();

	//************************************
	// Method:    StopJetpack
	// FullName:  AAdvancedMovementCharacter::StopJetpack
	// Access:    public 
	// Returns:   void
	// Qualifier: Used to set the state of the jetpack
	//************************************
	UFUNCTION(BlueprintCallable, Category = "Jetpack")
	void StopJetpack();

	//************************************
	// Method:    StartSprint
	// FullName:  AAdvancedMovementCharacter::StartSprint
	// Access:    public 
	// Returns:   void
	// Qualifier: Used to set the state of the sprint
	//************************************
	UFUNCTION(BlueprintCallable, Category = "Sprint")
	void StartSprint();

	//************************************
	// Method:    StopSprint
	// FullName:  AAdvancedMovementCharacter::StopSprint
	// Access:    public 
	// Returns:   void
	// Qualifier: Used to set the state of the sprint
	//************************************
	UFUNCTION(BlueprintCallable, Category = "Sprint")
	void StopSprint();

	//************************************
	// Method:    MoveForward
	// FullName:  AAdvancedMovementCharacter::MoveForward
	// Access:    public 
	// Returns:   void
	// Qualifier: Allows user to move based on axis input 
	// Parameter: float Value -1 to 1
	//************************************
	void MoveForward(float Value);

	//************************************
	// Method:    MoveRight
	// FullName:  AAdvancedMovementCharacter::MoveRight
	// Access:    public 
	// Returns:   void
	// Qualifier: Allows user to move based on axis input 
	// Parameter: float Value -1 to 1
	//************************************
	void MoveRight(float Value);

	//************************************
	// Method:    TurnRate
	// FullName:  AAdvancedMovementCharacter::TurnRate
	// Access:    public 
	// Returns:   void
	// Qualifier: Allows user to turn based on axis input 
	// Parameter: float Rate -1 to 1
	//************************************
	void TurnRate(float Rate);

	//************************************
	// Method:    LookUp
	// FullName:  AAdvancedMovementCharacter::LookUp
	// Access:    public 
	// Returns:   void
	// Qualifier: Allows user to turn based on axis input 
	// Parameter: float Rate -1 to 1
	//************************************
	void LookUp(float Rate);

	//************************************
	// Method:    DoDodge
	// FullName:  AAMC_Character::DoDodge
	// Access:    public 
	// Returns:   void
	// Qualifier: Does the Dodge
	//************************************
	void DoDodge();

	//value between -1 and 1 for the forward direction of the player
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
	float ForwardDirection;
	//value between -1 and 1 for the right direction of the player
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
	float RightDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Controls")
	float BaseTurnRate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Controls")
	float BaseLookUpRate;

	bool CanJumpInternal_Implementation() const override;
};
