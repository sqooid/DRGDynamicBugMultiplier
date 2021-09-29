// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GeneratedMission.generated.h"

/**
 * 
 */
UCLASS()
class FSD_API UGeneratedMission : public UObject
{
	GENERATED_BODY()

	public:
	UFUNCTION(BlueprintCallable)
	bool IsDeepDive() {return false;};
	
};
