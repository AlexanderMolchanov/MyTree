#pragma once
#include "Type.h"
#include <string>

class TypeSecond : public Type
{
	struct Point
	{
		int x;
		int y;
	};

	int n;
public:
	std::string str1;
	std::string str2;
	int field3;
	Point *arr;

	TypeSecond(std::string str1, std::string str2, int field3, int number_of_point);
	~TypeSecond();
};

