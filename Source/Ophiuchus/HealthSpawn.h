// Samuel Bunker CSCE 492 2-Dimensional Ophiuchus
// This is the header file for the target point that will spawn the health packs.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TargetPoint.h"
#include "HealthSpawn.generated.h"

UCLASS()
class OPHIUCHUS_API AHealthSpawn : public ATargetPoint
{
	GENERATED_BODY()

public: 
	AHealthSpawn();
	
};
