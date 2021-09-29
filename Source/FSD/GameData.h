// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameData.generated.h"

class UDifficultySetting;
/**
 * 
 */
UCLASS()
class FSD_API UGameData : public UObject
{
	GENERATED_BODY()
	public:
	UFUNCTION(BlueprintCallable)
	UDifficultySetting* GetDifficultySetting(int Index) {return nullptr;};
	
	UFUNCTION(BlueprintCallable)
	int GetDifficultyIndex(UDifficultySetting* Difficulty) {return 0;};
};
