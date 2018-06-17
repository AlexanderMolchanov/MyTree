#pragma once
#include "Type.h"
#include <string>

class TypeThird : public Type
{
public:

	std::string str1;
	std::string str2;
	int field3;
	int field4;
	int field5;
	float field6;

	TypeThird();
	~TypeThird();
};