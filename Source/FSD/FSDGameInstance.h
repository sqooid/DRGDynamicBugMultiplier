// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "FSDGameInstance.generated.h"

class UDeepDiveManager;
class UGeneratedMission;
/**
 * 
 */
UCLASS()
class FSD_API UFSDGameInstance : public UGameInstance
{
	GENERATED_BODY()
	public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UDeepDiveManager* DeepDiveManager;
	
	UFUNCTION(BlueprintCallable)
	void PostInit(bool reload){};
	
	UFUNCTION(BlueprintCallable)
	UGeneratedMission* GetGeneratedMission() {return nullptr;};
};
