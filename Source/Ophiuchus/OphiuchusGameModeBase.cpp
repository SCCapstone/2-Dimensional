// Samuel Bunker 2-Dimensional CSCE 490 Ophiuchus
// This cpp file creates the basic game mode operations and manages them. It initializes the spawn points into the game and 
// operates the spawn enemy function which will spawn an enemy sprite from a random spawn point over an interval of time. 

#include "OphiuchusGameModeBase.h"
#include "EnemySpawn.h"
#include "AlienSpawn.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"
#include "UObject/ConstructorHelpers.h"
#include "Enemy.h"
#include "FlipBook_Alien.h"

AOphiuchusGameModeBase::AOphiuchusGameModeBase() {

}
void AOphiuchusGameModeBase::BeginPlay() {
	UE_LOG(LogTemp, Warning, TEXT("Begin Play Test: Player will spawn next!"));
	UE_LOG(LogTemp, Warning, TEXT("Player Spawned In!"));
	Super::BeginPlay();
	TArray<AActor*> TempActors;
	TArray<AActor*> TempAliens;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AEnemySpawn::StaticClass(), TempActors);
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AAlienSpawn::StaticClass(), TempAliens);

	for (AActor* Actor : TempActors) {
		if (AEnemySpawn* SpawnPoint = Cast<AEnemySpawn>(Actor)) {
			EnemySpawnPoints.Add(SpawnPoint);
		}
	}
	for (AActor* Actor : TempAliens) {
		if (AAlienSpawn* SpawnPoint = Cast<AAlienSpawn>(Actor)) {
			AlienSpawnPoints.Add(SpawnPoint);
		}
	}
	GetWorld()->GetTimerManager().SetTimer(TEnemySpawnHandle, this, &AOphiuchusGameModeBase::SpawnEnemy, 2.0f, true);
	GetWorld()->GetTimerManager().SetTimer(TAlienSpawnHandle, this, &AOphiuchusGameModeBase::SpawnAlien, 2.0f, true);
	UE_LOG(LogTemp, Warning, TEXT("SpawnNum: %d"), EnemySpawnPoints.Num());
	UE_LOG(LogTemp, Warning, TEXT("AlienSpawnNum: %d"), AlienSpawnPoints.Num());
}
void AOphiuchusGameModeBase::SpawnEnemy() {
	int randIndex = FMath::RandRange(0, EnemySpawnPoints.Num() - 1);
	if (AEnemySpawn* SpawnPoint = EnemySpawnPoints[randIndex]) {
		FVector Loc = SpawnPoint->GetActorLocation();
		FRotator Rot = SpawnPoint->GetActorRotation();
		if (AEnemy* Enemy = GetWorld()->SpawnActor<AEnemy>(AOphiuchusGameModeBase::EnemyClass, Loc, Rot)) {
			UE_LOG(LogTemp, Warning, TEXT("Egg Spawning!"));
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Egg Did Not Spawn!"));
		}
	}
}
void AOphiuchusGameModeBase::SpawnAlien() {
	int randIndex = FMath::RandRange(0, AlienSpawnPoints.Num() - 1);
	if (AAlienSpawn* SpawnPoint = AlienSpawnPoints[randIndex]) {
		FVector Loc = SpawnPoint->GetActorLocation();
		FRotator Rot = SpawnPoint->GetActorRotation();
		if (AFlipBook_Alien* FlipBook_Alien = GetWorld()->SpawnActor<AFlipBook_Alien>(AOphiuchusGameModeBase::AlienClass, Loc, Rot)) {
			UE_LOG(LogTemp, Warning, TEXT("Alien Spawning!"));
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("Alien Did Not Spawn!"));
		}
	}

}

