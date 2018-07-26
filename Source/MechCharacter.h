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

	void StartJetpack();
	void StopJetpack();
	void StartSprint();
	void StopSprint();
	void MoveForward(float Value);
	void MoveRight(float Value);
	void TurnRate(float Rate);
	void LookUp(float Rate);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Controls")
	float BaseTurnRate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Controls")
	float BaseLookUpRate;
	
	
};
