// Empty class pointing to target point.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "AlienSpawn.h"
#include "FlipBook_Alien.generated.h"

/**
 * 
 */
UCLASS()
class OPHIUCHUS_API AFlipBook_Alien : public APaperCharacter
{
	GENERATED_BODY()
	
public:
	AFlipBook_Alien();

protected:
	virtual void BeginPlay() override;
};
