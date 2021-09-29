// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DeepDiveManager.generated.h"

class UGeneratedMission;
class UDeepDive;
/**
 * 
 */
UCLASS()
class FSD_API UDeepDiveManager : public UObject
{
	GENERATED_BODY()
	public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	UGeneratedMission* CurrentMission;
	
	UFUNCTION(BlueprintCallable)
	bool IsEliteDeepDive(UGeneratedMission* mission) {return false;}
	
	UFUNCTION(BlueprintCallable)
	UDeepDive* GetActiveDeepDive() {return nullptr;}

	UFUNCTION(BlueprintCallable)
	UDeepDive* GetActiveNormalDeepDive() {return nullptr;}

	UFUNCTION(BlueprintCallable)
	UDeepDive* GetActiveHardDeepDive() {return nullptr;}

	UFUNCTION(BlueprintCallable)
	int GetCurrentDeepDiveStage() {return 0;}
	
};
