#pragma once
#include "item.h"
class armorItem :
	public item
{
	int defense;
	int durability;
	int minimumStrength;
public:
	armorItem();
	~armorItem();
	int getDefense();
	int getDurability();
	int getMinimumStrenght();
	float defense(int attackValue, int heroDefense);
};

