// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "EnemySpawn.h"
#include "FlipBook_Alien.generated.h"

/**
 * 
 */
UCLASS()
class OPHIUCHUS_API AFlipBook_Alien : public APaperCharacter
{
	GENERATED_BODY()
	
public:
	AFlipBook_Alien();

protected:
	virtual void BeginPlay() override;
};
