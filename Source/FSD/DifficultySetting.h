// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SavableDataAsset.h"
#include "DifficultySetting.generated.h"

/**
 * 
 */
UCLASS()
class FSD_API UDifficultySetting : public USavableDataAsset
{
	GENERATED_BODY()

	public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ShortDifficultyName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HazardBonus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> EnemyCountModifier;
	
};
