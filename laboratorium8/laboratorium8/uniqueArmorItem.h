#pragma once
#include "armorItem.h"
#include "unique.h"

#include <cstdlib>
#include <ctime>
class uniqueArmorItem :
	public armorItem, unique
{
	int magicDurability;
	
public:
	uniqueArmorItem();
	~uniqueArmorItem();
	float magicCounterattack(int heroAura);
	float Defense(int attackValue, int heroDefense);
};

