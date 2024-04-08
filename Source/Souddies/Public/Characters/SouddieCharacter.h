// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SouddieCharacter.generated.h"

UCLASS()
class SOUDDIES_API ASouddieCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ASouddieCharacter();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
protected:
	virtual void BeginPlay() override;

public:	


};
