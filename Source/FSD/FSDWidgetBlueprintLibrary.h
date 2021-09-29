// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FSDWidgetBlueprintLibrary.generated.h"

class UFSDCheatManager;
/**
 * 
 */
UCLASS()
class FSD_API UFSDWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	public:
	UFUNCTION(BlueprintCallable)
	static UFSDCheatManager* GetCheatManager(UObject* WorldContextObject) {return nullptr;};

	
};
