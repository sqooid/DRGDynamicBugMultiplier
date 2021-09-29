// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DeepDive.generated.h"

class UDeepDiveTemplate;
/**
 * 
 */
UCLASS()
class FSD_API UDeepDive : public UObject
{
	GENERATED_BODY()
	public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UDeepDiveTemplate* Template;
	
};
