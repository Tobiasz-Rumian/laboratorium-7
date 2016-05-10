#pragma once
#include "storage.h"
#include "hero.h"
class bagpackStorage :
	public storage
{
	int reguiredStrenght;
	hero*owner;
public:
	bagpackStorage(hero owner, int size);
	~bagpackStorage();
};

