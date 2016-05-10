#pragma once
#include "item.h"
class armorItem :
	public item
{
	int defensePoints;
	int durability;
	int minimumStrength;
public:
	armorItem();
	~armorItem();
	int getDefense();
	int getDurability();
	int getMinimumStrenght();
	virtual float defense(int attackValue, int heroDefense);
	void setArmorItem(int defensePoints, int durability, int minimumStrength);
};

