// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "CustomGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class RYTHMGAME_API UCustomGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite)
	int LastScore;
	UPROPERTY(BlueprintReadWrite)
	int LastHighestCombo;
	UPROPERTY(BlueprintReadWrite)
	int LastPerfectCount;
	UPROPERTY(BlueprintReadWrite)
	int LastGoodCount;
	UPROPERTY(BlueprintReadWrite)
	int LastMissCount;
};
