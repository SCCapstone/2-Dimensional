// Samuel Bunker 2-Dimensional CSCE 490 Ophiuchus
// This is the header file for the Enemy.cpp file. It manages the instance of the actor class and the BeginPlay()

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemySpawn.h"
#include "Enemy.generated.h"

UCLASS()
class OPHIUCHUS_API AEnemy : public AActor {
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
