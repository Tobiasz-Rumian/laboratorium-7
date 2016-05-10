#pragma once
#include "storage.h"
#include <string>
class chestStorage :
	public storage
{
	std::string location;
	bool locked;
	int requiredLockpickSkill;
public:
	chestStorage();
	~chestStorage();
	int getRequiredLockpickSkill();
	void openChest();
};

