#pragma once
#include <string>

class item
{
	int value;
	std::string name;
	int weight;
	float condition;
	bool identified;
	std::string typ;
public:
	item();
	~item();
	void identify();
	float getCondition();
	std::string getName();
	int getValue();
	int getWeight();
	void randItem();
	void setitem(int value, std::string name, int weight, float condition, bool identified);
	std::string getTyp();
	//do zmiany
	virtual float specialAttack(int heroAttackPoints, int heroAura)=0;
	virtual void attack(int heroAttackPoints)=0;
	virtual int getHandedness() = 0;
	virtual void setWeaponItem(int handedness, std::string type) = 0;
	virtual float magicCounterattack(int heroAura)=0;
	virtual float Defense(int attackValue, int heroDefense)=0;
	virtual int getDefense()=0;
	virtual int getDurability()=0;
	virtual int getMinimumStrenght()=0;
	virtual float defense(int attackValue, int heroDefense)=0;
	virtual void setArmorItem(int defensePoints, int durability, int minimumStrength)=0;
	virtual void magicAttack(int heroMana)=0;
	virtual bool openPortal(int travelLenght, int heroMana)=0;
	virtual int getRequiredMana()=0;
	virtual int getMagicType()=0;
	virtual void setMagicItem(int requiredMana, int magicType)=0;
};

