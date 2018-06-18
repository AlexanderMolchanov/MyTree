#pragma once
#include "Type.h"
#include <string>

class TypeThird : public Type
{
	std::string m_str1;
	std::string m_str2;
	int m_field3;
	int m_field4;
	int m_field5;
	float m_field6;

public:

	TypeThird();
	~TypeThird();

	void setStr1(std::string str);
	void setStr2(std::string str);
	void setField3(int value);
	void setField4(int value);
	void setField5(int value);
	void setField6(float value);

	std::string getStr1();
	std::string getStr2();
	int getField3();
	int getField4();
	int getField5();
	float getField6();

};