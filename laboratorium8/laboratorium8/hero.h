#pragma once
#include <string>
#include <iostream>
#include "chestStorage.h"
using namespace std;
class hero
{
	std::string Name;
	int strenght;
	int lockpickSkill;
	int maxAtackPoints;
	int atackPoints;
	int mana;
	int maxMana;
	int aura;
public:
	hero();
	~hero();
	std::string getName();
	void setName();
	void hero::PointsMeter();
	int getAtacPoints();
	int getMana();
	int getAura();
	void foundChest(chestStorage chest);
};

