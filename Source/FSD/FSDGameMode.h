// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "FSDGameMode.generated.h"

class UObjectivesManager;
/**
 * 
 */
UCLASS()
class FSD_API AFSDGameMode : public AGameMode
{
	GENERATED_BODY()
	
	public:
	UFUNCTION(BlueprintCallable)
	void EndLevel(){};
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	UObjectivesManager* ObjectivesManager;
	
};
