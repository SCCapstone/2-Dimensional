// Samuel Bunker 2-Dimensional CSCE 490 Ophiuchus
// This cpp file creates the basic game mode operations and manages them. It initializes the spawn points into the game and 
// operates the spawn enemy function which will spawn an enemy sprite from a random spawn point over an interval of time. 

#include "OphiuchusGameModeBase.h"
#include "EnemySpawn.h"
#include "AlienSpawn.h"
#include "HealthSpawn.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"
#include "UObject/ConstructorHelpers.h"
#include "Enemy.h"
#include "FlipBook_Alien.h"
#include "HealthPack_Actor.h"

AOphiuchusGameModeBase::AOphiuchusGameModeBase() {

}
//Begins function on begin play
void AOphiuchusGameModeBase::BeginPlay() {
	UE_LOG(LogTemp, Warning, TEXT("Begin Play Test: Player will spawn next!"));
	UE_LOG(LogTemp, Warning, TEXT("Player Spawned In!"));
	Super::BeginPlay();
	//Sets arrays for all 3 spawning elements
	TArray<AActor*> TempActors;
	TArray<AActor*> TempAliens;
	TArray<AActor*> TempHealthPacks;
	//Retrieves amount of each target point from world. 
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AEnemySpawn::StaticClass(), TempActors);
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AAlienSpawn::StaticClass(), TempAliens);
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AHealthSpawn::StaticClass(), TempHealthPacks);

	//Loops run through each target point on map and add to the array
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
	for (AActor* Actor : TempHealthPacks) {
		if (AHealthSpawn* SpawnPoint = Cast<AHealthSpawn>(Actor)) {
			HealthPackSpawnPoints.Add(SpawnPoint);
		}
	}
	//Recursively calls functions throughout playtime to spawn actors/characters
	GetWorld()->GetTimerManager().SetTimer(TEnemySpawnHandle, this, &AOphiuchusGameModeBase::SpawnEnemy, 2.0f, true);
	GetWorld()->GetTimerManager().SetTimer(TAlienSpawnHandle, this, &AOphiuchusGameModeBase::SpawnAlien, 2.0f, true);
	GetWorld()->GetTimerManager().SetTimer(THealthPackSpawnHandle, this, &AOphiuchusGameModeBase::SpawnHealthPack, 2.0f, true);
	//Showing how many of each spawn point are in map
	UE_LOG(LogTemp, Warning, TEXT("SpawnNum: %d"), EnemySpawnPoints.Num());
	UE_LOG(LogTemp, Warning, TEXT("AlienSpawnNum: %d"), AlienSpawnPoints.Num());
	UE_LOG(LogTemp, Warning, TEXT("HealthpackSpawnNum: %d"), HealthPackSpawnPoints.Num());
}
//Function definition to spawn eggs
void AOphiuchusGameModeBase::SpawnEnemy() {
	int randIndex = FMath::RandRange(0, EnemySpawnPoints.Num() - 1);
	//Picks random spawn point from array
	if (AEnemySpawn* SpawnPoint = EnemySpawnPoints[randIndex]) {
		FVector Loc = SpawnPoint->GetActorLocation();
		FRotator Rot = SpawnPoint->GetActorRotation();
		//Spawning enemies
		//UNIT TEST 1: Outputting to log that the egg was spawned. 
		if (AEnemy* Enemy = GetWorld()->SpawnActor<AEnemy>(AOphiuchusGameModeBase::EnemyClass, Loc, Rot)) {
			UE_LOG(LogTemp, Warning, TEXT("Egg Spawning!"));
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Egg Did Not Spawn!"));
		}
	}
}
//Function definition to spawn aliens
void AOphiuchusGameModeBase::SpawnAlien() {
	int randIndex = FMath::RandRange(0, AlienSpawnPoints.Num() - 1);
	if (AAlienSpawn* SpawnPoint = AlienSpawnPoints[randIndex]) {
		FVector Loc = SpawnPoint->GetActorLocation();
		FRotator Rot = SpawnPoint->GetActorRotation();
		//UNIT TESTS 2: Outputting to log that the alien was spawned.
		if (AFlipBook_Alien* FlipBook_Alien = GetWorld()->SpawnActor<AFlipBook_Alien>(AOphiuchusGameModeBase::AlienClass, Loc, Rot)) {
			UE_LOG(LogTemp, Warning, TEXT("Alien Spawning!"));
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("Alien Did Not Spawn!"));
		}
	}
}
//Function definition to spawn health
void AOphiuchusGameModeBase::SpawnHealthPack() {
	int randIndex = FMath::RandRange(0, HealthPackSpawnPoints.Num() - 1);
	if (AHealthSpawn* SpawnPoint = HealthPackSpawnPoints[randIndex]) {
		FVector Loc = SpawnPoint->GetActorLocation();
		FRotator Rot = SpawnPoint->GetActorRotation();
		//UNIT TEST 3: Outputting to log that the alien was spawned. 
		if (AHealthPack_Actor* HealthPack = GetWorld()->SpawnActor<AHealthPack_Actor>(AOphiuchusGameModeBase::HealthPackClass, Loc, Rot)) {
			UE_LOG(LogTemp, Warning, TEXT("Health Pack Spawning!"));
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("Health Pack Did Not Spawn!"));
		}
	}
}

