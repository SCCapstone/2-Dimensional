// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HealthSpawn.h"
#include "HealthPack_Actor.generated.h"

UCLASS()
class OPHIUCHUS_API AHealthPack_Actor : public AActor
{
	GENERATED_BODY()
	
public:	
	AHealthPack_Actor();

protected:
	virtual void BeginPlay() override;

};
