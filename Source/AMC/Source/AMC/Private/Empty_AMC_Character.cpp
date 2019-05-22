// Fill out your copyright notice in the Description page of Project Settings.

#include "Empty_AMC_Character.h"
#include "AMC_MovementComponent.h"

// Sets default values
AEmpty_AMC_Character::AEmpty_AMC_Character(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<UAMC_MovementComponent>(ACharacter::CharacterMovementComponentName))
{
	PrimaryActorTick.bCanEverTick = true;
}

void AEmpty_AMC_Character::StartSprinting()
{
	UAMC_MovementComponent* MovCom = Cast<UAMC_MovementComponent>(GetCharacterMovement());
	if (MovCom)
	{
		MovCom->SetSprinting(true);
	}
}

void AEmpty_AMC_Character::StopSprinting()
{
	UAMC_MovementComponent* MovCom = Cast<UAMC_MovementComponent>(GetCharacterMovement());
	if (MovCom)
	{
		MovCom->SetSprinting(false);
	}
}

void AEmpty_AMC_Character::StartJetpacking()
{
	UAMC_MovementComponent* MovCom = Cast<UAMC_MovementComponent>(GetCharacterMovement());
	if (MovCom)
	{
		MovCom->SetJetpacking(true);
	}
}

void AEmpty_AMC_Character::StopJetpacking()
{
	UAMC_MovementComponent* MovCom = Cast<UAMC_MovementComponent>(GetCharacterMovement());
	if (MovCom)
	{
		MovCom->SetJetpacking(false);
	}
}

// Called when the game starts or when spawned
void AEmpty_AMC_Character::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEmpty_AMC_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEmpty_AMC_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

