#pragma once
#include <string>

class item
{
	int value;
	std::string name;
	int weight;
	float condition;
	bool identified;
public:
	item();
	~item();
	void identify();
	float getCondition();
	std::string getName();
	int getValue();
	int getWeight();
	void randItem();
	void setitem(int value, std::string name, int weight, float condition, bool identified);
};

