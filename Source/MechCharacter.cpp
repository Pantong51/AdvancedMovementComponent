// Fill out your copyright notice in the Description page of Project Settings.

#include "MechCharacter.h"
#include "MechMovementComponent.h"
#include "GameFramework/Actor.h"


AMechCharacter::AMechCharacter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<UMechMovementComponent>(ACharacter::CharacterMovementComponentName))
{
	PrimaryActorTick.bCanEverTick = true;
	BaseLookUpRate = 45.f;
	BaseTurnRate = 45.f;
}

// Called when the game starts or when spawned
void AMechCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMechCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMechCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &AMechCharacter::StartSprint);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &AMechCharacter::StopSprint);
	PlayerInputComponent->BindAction("Jetpack", IE_Pressed, this, &AMechCharacter::StartJetpack);
	PlayerInputComponent->BindAction("Jetpack", IE_Released, this, &AMechCharacter::StopJetpack);
	PlayerInputComponent->BindAxis("MoveForward", this, &AMechCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMechCharacter::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &AMechCharacter::TurnRate);
	PlayerInputComponent->BindAxis("LookUp", this, &AMechCharacter::LookUp);
}

void AMechCharacter::StartJetpack()
{
	UMechMovementComponent* MovCom = Cast<UMechMovementComponent>(GetCharacterMovement());
	if (MovCom)
	{

		MovCom->SetJetpacking(true);
		Jump();
	}
}

void AMechCharacter::StopJetpack()
{
	UMechMovementComponent* MovCom = Cast<UMechMovementComponent>(GetCharacterMovement());
	if (MovCom)
	{
		MovCom->SetJetpacking(false);
	}
}

void AMechCharacter::StartSprint()
{
	UMechMovementComponent* MovCom = Cast<UMechMovementComponent>(GetCharacterMovement());
	if (MovCom)
	{
		MovCom->SetSprinting(true);
	}
}

void AMechCharacter::StopSprint()
{
	UMechMovementComponent* MovCom = Cast<UMechMovementComponent>(GetCharacterMovement());
	if (MovCom)
	{
		MovCom->SetSprinting(false);
	}
}

void AMechCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void AMechCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void AMechCharacter::TurnRate(float Rate)
{
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AMechCharacter::LookUp(float Rate)
{
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

