// Samuel Bunker 2-Dimensional CSCE 490 Ophiuchus
// This is the header file for the game mode. It creates a sub-class for enemy which the spawn enemy function takes in and initializes a timing variable
// which is used in the spawn function.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "OphiuchusGameModeBase.generated.h"


UCLASS()
class OPHIUCHUS_API AOphiuchusGameModeBase : public AGameModeBase {
	GENERATED_BODY()
public:
	AOphiuchusGameModeBase();
protected:
	TArray<class AEnemySpawn*> EnemySpawnPoints;
	TArray<class AAlienSpawn*> AlienSpawnPoints;
	UPROPERTY(EditAnywhere, Category = "EnemySettings")
		TSubclassOf<class AEnemy> EnemyClass;

	UPROPERTY(EditAnywhere, Category = "FlipBook_AlienSettings")
		TSubclassOf<class AFlipBook_Alien> AlienClass;

	FTimerHandle TEnemySpawnHandle;
	FTimerHandle TAlienSpawnHandle;

protected:
	void SpawnEnemy();
	void SpawnAlien();
protected:
	virtual void BeginPlay() override;

};
