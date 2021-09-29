// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "FSDCheatManager.generated.h"

/**
 * 
 */
UCLASS()
class FSD_API UFSDCheatManager : public UCheatManager
{
	GENERATED_BODY()
	public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float PreviousMaxDistanceBeforeCleanup;
	
	UFUNCTION(BlueprintCallable)
	void C_CompleteMission(){};

	UFUNCTION(BlueprintCallable)
	void C_GodMode(){};
	
	UFUNCTION(BlueprintCallable)
	void SetGodMode(bool God){};
};
