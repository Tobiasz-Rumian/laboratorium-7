#pragma once
#include "item.h"
#include <string>
#include <iostream>
class weaponItem :
	public item
{
	int handedness;
	std::string type;
public:
	weaponItem();
	~weaponItem();
	std::string getType();
	void attack(int heroAttackPoints);
	int getHandedness();
};

