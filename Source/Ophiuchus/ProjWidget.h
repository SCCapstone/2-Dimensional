// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"


UCLASS()
class OPHIUCHUS_API 
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	void InitVelocity(const FVector& amp; ShootDirection);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


public:
	UFUNCTION()
		void OnFire();

	InputComponent->BindAction("Fire", IE_Pressed, this, &AFPSCharacter::OnFire);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		FVector MuzOff;

	UPROPERTY(EditDefaultsOnly, Category = Projectile)
		TSubclassOf ProjectileClass;
	
};
