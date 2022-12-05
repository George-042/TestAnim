// Fill out your copyright notice in the Description page of Project Settings.


#include "Character_01.h"

#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
ACharacter_01::ACharacter_01()
{
	PrimaryActorTick.bCanEverTick = true;

	GetCapsuleComponent()->InitCapsuleSize(40, 90);
	
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0, 400, 0);
	GetCharacterMovement()->JumpZVelocity = 200;
	GetCharacterMovement()->AirControl = 0.2f;
	GetCharacterMovement()->MaxWalkSpeed = 400;
    GetCharacterMovement()->MaxWalkSpeedCrouched = 200;
    GetCharacterMovement()->SetWalkableFloorAngle(60);
}

void ACharacter_01::BeginPlay()
{
	Super::BeginPlay();
}

void ACharacter_01::Tick(const float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACharacter_01::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

