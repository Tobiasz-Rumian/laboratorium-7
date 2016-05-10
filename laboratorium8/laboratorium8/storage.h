#pragma once
#include "item.h"
class storage
{
	int size;
	bool full;
	
public:
	storage(int size);
	~storage();
	int getSize();
	void setFull();
	bool getFull();
	void setSize(int size);
	item**content;
};

