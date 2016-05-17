#pragma once
#include "armorItem.h"
#include "unique.h"

#include <cstdlib>
#include <ctime>
class uniqueArmorItem :
	public armorItem, unique
{
	int magicDurability;
	std::string typ;
	
public:
	uniqueArmorItem();
	~uniqueArmorItem();
	float magicCounterattack(int heroAura);
	float Defense(int attackValue, int heroDefense);
	//do zmiany
	float specialAttack(int heroAttackPoints, int heroAura);
	void attack(int heroAttackPoints);
	int getHandedness();
	void setWeaponItem(int handedness, std::string type);
	void magicAttack(int heroMana);
	bool openPortal(int travelLenght, int heroMana);
	int getRequiredMana();
	int getMagicType();
	void setMagicItem(int requiredMana, int magicType);

};

