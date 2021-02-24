// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TheCorrectGoldSystem.generated.h"

/**
 * 
 */
UCLASS()
class AOP1_2_1_API UTheCorrectGoldSystem : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable, Category = "The Correct Gold System")
		int BuyFromShop(int cost, int currentGold);
	
};
