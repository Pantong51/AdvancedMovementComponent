// Fill out your copyright notice in the Description page of Project Settings.

#include "AdvancedMovementCharacter.h"
#include "AdvancedMovementComponent.h"



// Sets default values
AAdvancedMovementCharacter::AAdvancedMovementCharacter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<UAdvancedMovementComponent>(ACharacter::CharacterMovementComponentName))
{
	PrimaryActorTick.bCanEverTick = true;
	BaseLookUpRate = 45.f;
	BaseTurnRate = 45.f;
}

// Called when the game starts or when spawned
void AAdvancedMovementCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAdvancedMovementCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AAdvancedMovementCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &AAdvancedMovementCharacter::StartSprint);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &AAdvancedMovementCharacter::StopSprint);
	PlayerInputComponent->BindAction("Jetpack", IE_Pressed, this, &AAdvancedMovementCharacter::StartJetpack);
	PlayerInputComponent->BindAction("Jetpack", IE_Released, this, &AAdvancedMovementCharacter::StopJetpack);
	PlayerInputComponent->BindAxis("MoveForward", this, &AAdvancedMovementCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AAdvancedMovementCharacter::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &AAdvancedMovementCharacter::TurnRate);
	PlayerInputComponent->BindAxis("LookUp", this, &AAdvancedMovementCharacter::LookUp);
}


void AAdvancedMovementCharacter::StartJetpack()
{
	UAdvancedMovementComponent* MovCom = Cast<UAdvancedMovementComponent>(GetCharacterMovement());
	if (MovCom)
	{

		MovCom->SetJetpacking(true);
		//The jetpack uses the falling state to deal with gravity. It's not the cleanest but this is the current best way to transition from group to air
		Jump();
	}
}


void AAdvancedMovementCharacter::StopJetpack()
{
	UAdvancedMovementComponent* MovCom = Cast<UAdvancedMovementComponent>(GetCharacterMovement());
	if (MovCom)
	{
		MovCom->SetJetpacking(false);
	}
}


void AAdvancedMovementCharacter::StartSprint()
{
	UAdvancedMovementComponent* MovCom = Cast<UAdvancedMovementComponent>(GetCharacterMovement());
	if (MovCom)
	{
		MovCom->SetSprinting(true);
	}
}


void AAdvancedMovementCharacter::StopSprint()
{
	UAdvancedMovementComponent* MovCom = Cast<UAdvancedMovementComponent>(GetCharacterMovement());
	if (MovCom)
	{
		MovCom->SetSprinting(false);
	}
}


void AAdvancedMovementCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		AddMovementInput(GetActorForwardVector(), Value);
	}
}


void AAdvancedMovementCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		AddMovementInput(GetActorRightVector(), Value);
	}
}


void AAdvancedMovementCharacter::TurnRate(float Rate)
{
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}


void AAdvancedMovementCharacter::LookUp(float Rate)
{
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

