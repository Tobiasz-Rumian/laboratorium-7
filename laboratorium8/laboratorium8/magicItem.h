#pragma once
#include "item.h"
class magicItem :
	public item
{
	int requiredMana;
	int magicType;
public:
	magicItem();
	~magicItem();
	int getRequiredMana();
	int getMagicType();
	static int basicMagicAttack;
	void setMagicItem(int requiredMana, int magicType);
};

