#pragma once
#include "magicItem.h"
class scrollItem :
	public magicItem
{
	int travelRange;
	std::string typ;
public:
	scrollItem();
	~scrollItem();
	bool openPortal(int travelLenght, int heroMana);
	//do zmiany
	float specialAttack(int heroAttackPoints, int heroAura);
	void attack(int heroAttackPoints);
	int getHandedness();
	void setWeaponItem(int handedness, std::string type);
	float magicCounterattack(int heroAura);
	float Defense(int attackValue, int heroDefense);
	int getDefense();
	int getDurability();
	int getMinimumStrenght();
	float defense(int attackValue, int heroDefense);
	void setArmorItem(int defensePoints, int durability, int minimumStrength);
	void magicAttack(int heroMana);
};

