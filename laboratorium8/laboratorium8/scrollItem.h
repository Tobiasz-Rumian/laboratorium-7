#pragma once
#include "magicItem.h"
class scrollItem :
	public magicItem
{
	int travelRange;
public:
	scrollItem();
	~scrollItem();
	bool openPortal(int travelLenght, int heroMana);
};

