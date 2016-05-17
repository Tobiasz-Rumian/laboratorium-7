#pragma once
#include "magicItem.h"
#include <string>
#include <iostream>
class runeItem :
	public magicItem
{
	int runePower;
	std::string typ;
public:
	runeItem();
	~runeItem();
	void magicAttack(int heroMana);
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
	bool openPortal(int travelLenght, int heroMana);
};

