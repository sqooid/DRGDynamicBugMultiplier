// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameFunctionLibrary.generated.h"

class AFSDGameMode;
class UDeepDiveManager;
class UGameData;
/**
 * 
 */
UCLASS()
class FSD_API UGameFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable)
	static UGameData* GetFSDGameData() {return nullptr;};

	UFUNCTION(BlueprintCallable)
	static AFSDGameMode* GetFSDGameMode(UObject* WorldContextObject) {return nullptr;};
	
	UFUNCTION(BlueprintCallable)
	static UDeepDiveManager* GetDeepDiveManager(UObject* WorldContextObject) {return nullptr;};
	
};
