#pragma once
#include "weaponItem.h"
#include "unique.h"
class uniqueWeaponItem :
	public weaponItem, unique
{
public:
	uniqueWeaponItem();
	~uniqueWeaponItem();
};

