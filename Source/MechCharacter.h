// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MechCharacter.generated.h"

UCLASS()
class COOP_MECH_API AMechCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMechCharacter(const FObjectInitializer& ObjectInitializer);

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
	// FullName:  AMechCharacter::StopJetpack
	// Access:    public 
	// Returns:   void
	// Qualifier: Used to set the state of the jetpack
	//************************************
	UFUNCTION(BlueprintCallable, Category = "Jetpack")
	void StartJetpack();

	//************************************
	// Method:    StopJetpack
	// FullName:  AMechCharacter::StopJetpack
	// Access:    public 
	// Returns:   void
	// Qualifier: Used to set the state of the jetpack
	//************************************
	UFUNCTION(BlueprintCallable, Category = "Jetpack")
	void StopJetpack();

	//************************************
	// Method:    StartSprint
	// FullName:  AMechCharacter::StartSprint
	// Access:    public 
	// Returns:   void
	// Qualifier: Used to set the state of the sprint
	//************************************
	UFUNCTION(BlueprintCallable, Category = "Sprint")
	void StartSprint();

	//************************************
	// Method:    StopSprint
	// FullName:  AMechCharacter::StopSprint
	// Access:    public 
	// Returns:   void
	// Qualifier: Used to set the state of the sprint
	//************************************
	UFUNCTION(BlueprintCallable, Category = "Sprint")
	void StopSprint();

	//************************************
	// Method:    MoveForward
	// FullName:  AMechCharacter::MoveForward
	// Access:    public 
	// Returns:   void
	// Qualifier: Allows user to move based on axis input 
	// Parameter: float Value -1 to 1
	//************************************
	void MoveForward(float Value);

	//************************************
	// Method:    MoveRight
	// FullName:  AMechCharacter::MoveRight
	// Access:    public 
	// Returns:   void
	// Qualifier: Allows user to move based on axis input 
	// Parameter: float Value -1 to 1
	//************************************
	void MoveRight(float Value);

	//************************************
	// Method:    TurnRate
	// FullName:  AMechCharacter::TurnRate
	// Access:    public 
	// Returns:   void
	// Qualifier: Allows user to turn based on axis input 
	// Parameter: float Rate -1 to 1
	//************************************
	void TurnRate(float Rate);

	//************************************
	// Method:    LookUp
	// FullName:  AMechCharacter::LookUp
	// Access:    public 
	// Returns:   void
	// Qualifier: Allows user to turn based on axis input 
	// Parameter: float Rate -1 to 1
	//************************************
	void LookUp(float Rate);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Controls")
	float BaseTurnRate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Controls")
	float BaseLookUpRate;
	
	
};
