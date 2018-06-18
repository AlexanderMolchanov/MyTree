#include "TypeThird.h"

TypeThird::TypeThird()
{
}

TypeThird::~TypeThird()
{
}

void TypeThird::setStr1(std::string str)
{
	m_str1 = str;
}

void TypeThird::setStr2(std::string str)
{
	m_str2 = str;
}

void TypeThird::setField3(int value)
{
	m_field3 = value;
}

void TypeThird::setField4(int value)
{
	m_field4 = value;
}

void TypeThird::setField5(int value)
{
	m_field5 = value;
}

void TypeThird::setField6(float value)
{
	m_field6 = value;
}

std::string TypeThird::getStr1()
{
	return m_str1;
}

std::string TypeThird::getStr2()
{
	return m_str2;
}

int TypeThird::getField3()
{
	return m_field3;
}

int TypeThird::getField4()
{
	return m_field4;
}

int TypeThird::getField5()
{
	return m_field5;
}

float TypeThird::getField6()
{
	return m_field6;
}