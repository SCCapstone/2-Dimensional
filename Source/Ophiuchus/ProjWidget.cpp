// Fill out your copyright notice in the Description page of Project Settings.


#include "SlateBasics.h"
#include "SlateExtras.h"
#include "ProjWidget.h"

    {
    // try and fire a projectile
    void ProjWidget::InitVelocity(const FVector& amp; ShootDirection)
    {
        if (ProjectileMovement)
        {
            // set the projectile's velocity to the desired direction
            ProjectileMovement->Velocity = ShootDirection * ProjectileMovement->InitialSpeed;
        }
    }
    if (ProjectileClass != NULL)
    {   
        // Get the camera transform
        FVector CamLoc;
        FRotator CamRot;
        GetActorEyesViewPoint(CamLoc, CamRot);
        // MuzzleOffset is in camera space, so transform it to world space before offsetting from the camera to find the final muzzle position
        FVector const MuzLoc = CamLoc + FTransform(CamRot).TransformVector(MuzOff);
        FRotator MuzRot = CamRot;
        MuzRot.Pitch += 10.0f;          
        UWorld* const World = GetWorld();
        if (World)
        {
            FActorSpawnParameters SpawnParams;
            SpawnParams.Owner = this;
            SpawnParams.Instigator = Instigator;
            AFPSProjectile* const Projectile = World->SpawnActor(ProjectileClass, MuzLoc, MuzRot, SpawnParams);
            if (Projectile)
            {
                // find launch direction
                FVector const LaunchDir = MuzRot.Vector();
                Projectile->InitVelocity(LaunchDir);
            }
        }
    }
    }