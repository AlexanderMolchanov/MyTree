#include "TypeSecond.h"
#include <iostream>

TypeSecond::TypeSecond(std::string str1, std::string str2, int field3, int arraySize) : m_str1(str1), m_str2(str2), m_field3(field3), m_arraySize(arraySize)
{
	for (int i = 0; i < m_arraySize; ++i)
	{
		points.push_back(new Point());
	}
}

TypeSecond::~TypeSecond()
{
}

TypeSecond::Point::Point()
{
	x = rand() % 10;
	y = rand() % 10;
}

void TypeSecond::setStr1(std::string str)
{
	m_str1 = str;
}

void TypeSecond::setStr2(std::string str)
{
	m_str2 = str;
}

void TypeSecond::setField3(int value)
{
	m_field3 = value;
}

void TypeSecond::setArraySize(int size)
{
	m_arraySize = size;
}

std::string TypeSecond::getStr1()
{
	return m_str1;
}

std::string TypeSecond::getStr2()
{
	return m_str2;
}

int TypeSecond::getField3()
{
	return m_field3;
}

void TypeSecond::printArray()
{
	std::cout << "X\t" << "Y" << std::endl << std::endl;
	for (int i = 0; i < points.size(); ++i) {
		std::cout << points[i]->x << "\t" << points[i]->y << std::endl;
	}
}
