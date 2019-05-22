// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Empty_AMC_Character.generated.h"

UCLASS()
class AMC_API AEmpty_AMC_Character : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEmpty_AMC_Character(const FObjectInitializer& ObjectInitializer);

	//set starting sprinting if can 
	UFUNCTION(BlueprintCallable)
	void StartSprinting();
	//stops starting sprinting if can 
	UFUNCTION(BlueprintCallable)
	void StopSprinting();
	//Sets starting jetpacking if can 
	UFUNCTION(BlueprintCallable)
	void StartJetpacking();
	//stops starting jetpacking if can 
	UFUNCTION(BlueprintCallable)
	void StopJetpacking();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
