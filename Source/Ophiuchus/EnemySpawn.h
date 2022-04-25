// Samuel Bunker 2-Dimensional CSCE 490 Ophiuchus
// This is the header file for the enemy spawn point. Empty as of now.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TargetPoint.h"
#include "EnemySpawn.generated.h"

UCLASS()
class OPHIUCHUS_API AEnemySpawn : public ATargetPoint {
	GENERATED_BODY()
public:
	AEnemySpawn();
	
};
