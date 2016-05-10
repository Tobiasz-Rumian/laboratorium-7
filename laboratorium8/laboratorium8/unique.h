#pragma once
#include <string>
class unique
{
	std::string creator;
	int specialStats;
public:
	unique();
	~unique();
	std::string getCreator();
	int getSpecialStats();
	void setUnique(std::string creator, int specialStats);
};