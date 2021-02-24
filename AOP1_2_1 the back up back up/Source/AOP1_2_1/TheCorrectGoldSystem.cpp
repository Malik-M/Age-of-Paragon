// Fill out your copyright notice in the Description page of Project Settings.


#include "TheCorrectGoldSystem.h"

int UTheCorrectGoldSystem::BuyFromShop(int cost, int currentGold)
{
	currentGold = currentGold - cost;
	return currentGold;
}
