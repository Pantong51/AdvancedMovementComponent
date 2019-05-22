// Fill out your copyright notice in the Description page of Project Settings.

#include "AMC_Character.h"
#include "AMC_MovementComponent.h"
#include "Components/InputComponent.h"
#include "Engine/World.h"

// Sets default values
AAMC_Character::AAMC_Character(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<UAMC_MovementComponent>(ACharacter::CharacterMovementComponentName))
{
	PrimaryActorTick.bCanEverTick = true;
	BaseLookUpRate = 45.f;
	BaseTurnRate = 45.f;
}

// Called when the game starts or when spawned
void AAMC_Character::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AAMC_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	ForwardDirection = (FVector::DotProduct(GetActorForwardVector(), GetVelocity().GetSafeNormal()));
	RightDirection = (FVector::DotProduct(GetActorRightVector(), GetVelocity().GetSafeNormal()));
}

// Called to bind functionality to input
void AAMC_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &AAMC_Character::StartSprint);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &AAMC_Character::StopSprint);
	PlayerInputComponent->BindAction("Jetpack", IE_Pressed, this, &AAMC_Character::StartJetpack);
	PlayerInputComponent->BindAction("Jetpack", IE_Released, this, &AAMC_Character::StopJetpack);
	PlayerInputComponent->BindAction("Dodge", IE_Pressed, this, &AAMC_Character::DoDodge);
	PlayerInputComponent->BindAxis("MoveForward", this, &AAMC_Character::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AAMC_Character::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &AAMC_Character::TurnRate);
	PlayerInputComponent->BindAxis("LookUp", this, &AAMC_Character::LookUp);


}


void AAMC_Character::StartJetpack()
{
	UAMC_MovementComponent* MovCom = Cast<UAMC_MovementComponent>(GetCharacterMovement());
	if (MovCom)
	{
		Jump();
	}
}


void AAMC_Character::StopJetpack()
{
	UAMC_MovementComponent* MovCom = Cast<UAMC_MovementComponent>(GetCharacterMovement());
	if (MovCom)
	{
		MovCom->SetJetpacking(false);
	}
}


void AAMC_Character::StartSprint()
{
	UAMC_MovementComponent* MovCom = Cast<UAMC_MovementComponent>(GetCharacterMovement());
	if (MovCom)
	{
		MovCom->SetSprinting(true);
	}
}


void AAMC_Character::StopSprint()
{
	UAMC_MovementComponent* MovCom = Cast<UAMC_MovementComponent>(GetCharacterMovement());
	if (MovCom)
	{
		MovCom->SetSprinting(false);
	}
}


void AAMC_Character::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		AddMovementInput(GetActorForwardVector(), Value);
	}
}


void AAMC_Character::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		AddMovementInput(GetActorRightVector(), Value);
	}
}


void AAMC_Character::TurnRate(float Rate)
{
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}


void AAMC_Character::LookUp(float Rate)
{
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void AAMC_Character::DoDodge()
{
	UAMC_MovementComponent* MovCom = Cast<UAMC_MovementComponent>(GetCharacterMovement());
	if (MovCom)
	{
		MovCom->DoDodge();
	}
}

bool AAMC_Character::CanJumpInternal_Implementation() const
{
	bool bCanJump = Super::CanJumpInternal_Implementation();
	UAMC_MovementComponent* MovCom = Cast<UAMC_MovementComponent>(GetCharacterMovement());
	if (!bCanJump && MovCom)
	{
 		bCanJump = MovCom->CanJump();
	}
	return bCanJump;
}