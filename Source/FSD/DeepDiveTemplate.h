// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SavableDataAsset.h"
#include "DeepDiveTemplate.generated.h"

class UDifficultySetting;
/**
 * 
 */
UCLASS()
class FSD_API UDeepDiveTemplate : public USavableDataAsset
{
	GENERATED_BODY()
	public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TArray<UDifficultySetting*> Difficulties;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float HazardBonus;
};
