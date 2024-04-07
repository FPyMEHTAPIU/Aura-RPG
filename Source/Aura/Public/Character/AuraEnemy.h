// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
<<<<<<< HEAD
#include "Interaction/EnemyInterface.h"
=======
>>>>>>> 9927415 (Player and Enemy Characters)
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
<<<<<<< HEAD
class AURA_API AAuraEnemy : public AAuraCharacterBase, public IEnemyInterface
{
	GENERATED_BODY()

public:
	AAuraEnemy();
	virtual void HighlightActor() override;	
	virtual void UnHighlightActor() override;
};
=======
class AURA_API AAuraEnemy : public AAuraCharacterBase
{
	GENERATED_BODY()
	
};
>>>>>>> 9927415 (Player and Enemy Characters)
