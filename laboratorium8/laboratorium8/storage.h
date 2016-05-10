#pragma once
#include "item.h"
class storage
{
	int size;
	bool full;
	item*content;
public:
	storage();
	~storage();
	int getSize();
	void setFull();
	bool getFull();
};

