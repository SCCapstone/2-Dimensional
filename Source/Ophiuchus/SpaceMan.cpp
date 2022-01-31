// Fill out your copyright notice in the Description page of Project Settings.


#include "SpaceMan.h"

// Sets default values
ASpaceMan::ASpaceMan()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpaceMan::BeginPlay()
{
	Super::BeginPlay();

	if (HUD_Widget_Class != nullptr) {

		HUD_Widget = CreateWidget(GetWorld(), HUD_Widget_Class);
		HUD_Widget->AddToViewport();
	}
	
}

// Called every frame
void ASpaceMan::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

