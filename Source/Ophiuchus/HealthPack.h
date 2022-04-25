// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "HealthSpawn.h"
#include "HealthPack.generated.h"

/**
 * 
 */
UCLASS()
class OPHIUCHUS_API AHealthPack : public APaperCharacter
{
	GENERATED_BODY()
	
public:
	AHealthPack();

protected:
	virtual void BeginPlay() override;
};
