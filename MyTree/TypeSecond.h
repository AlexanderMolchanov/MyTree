#pragma once
#include "Type.h"
#include <string>
#include <vector>

class TypeSecond : public Type
{
	struct Point
	{
		int x;
		int y;

		Point();
	};

	std::string m_str1;
	std::string m_str2;
	int m_field3;
	std::vector<Point*> points;

	int m_arraySize;
public:
	
	TypeSecond(std::string str1, std::string str2, int field3, int arraySize);
	~TypeSecond();

	void setStr1(std::string str);
	void setStr2(std::string str);
	void setField3(int value);
	void setArraySize(int arraySize);

	std::string getStr1();
	std::string getStr2();
	int getField3();

	void printArray();
};

