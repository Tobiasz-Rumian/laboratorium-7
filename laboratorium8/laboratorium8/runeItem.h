#pragma once
#include "magicItem.h"
#include <string>
#include <iostream>
class runeItem :
	public magicItem
{
	int runePower;
public:
	runeItem();
	~runeItem();
	void magicAttack(int heroMana);
};

