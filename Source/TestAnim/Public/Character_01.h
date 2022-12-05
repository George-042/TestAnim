// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "Character_01.generated.h"

UCLASS()
class TESTANIM_API ACharacter_01 : public ACharacter
{
	GENERATED_BODY()
	
public:
	ACharacter_01();
	
protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(const float DeltaTime) override;

	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

};
