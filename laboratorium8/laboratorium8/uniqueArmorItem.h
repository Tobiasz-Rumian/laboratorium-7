#pragma once
#include "armorItem.h"
#include "unique.h"
class uniqueArmorItem :
	public armorItem, unique
{
public:
	uniqueArmorItem();
	~uniqueArmorItem();
};

