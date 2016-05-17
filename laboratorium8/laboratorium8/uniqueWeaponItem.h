#pragma once
#include "weaponItem.h"
#include "unique.h"
class uniqueWeaponItem :
	public weaponItem, unique
{
	std::string typ;
public:
	uniqueWeaponItem();
	~uniqueWeaponItem();
	float specialAttack(int heroAttackPoints, int heroAura);
	//do zmiany
	float magicCounterattack(int heroAura);
	float Defense(int attackValue, int heroDefense);
	int getDefense();
	int getDurability();
	int getMinimumStrenght();
	float defense(int attackValue, int heroDefense);
	void setArmorItem(int defensePoints, int durability, int minimumStrength);
	void magicAttack(int heroMana);
	bool openPortal(int travelLenght, int heroMana);
	int getRequiredMana();
	int getMagicType();
	void setMagicItem(int requiredMana, int magicType);
};

