#pragma once
#include "storage.h"
#include "uniqueArmorItem.h"
#include "uniqueWeaponItem.h"
#include "runeItem.h"
#include "scrollItem.h"
#include <string>
class chestStorage :
	public storage
{
	std::string location;
	bool locked;
	int requiredLockpickSkill;
	int items=0;
public:
	chestStorage(std::string location, int size);
	~chestStorage();
	int getRequiredLockpickSkill();
	void openChest();
	bool getLocked();

};

