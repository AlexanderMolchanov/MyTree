#pragma once
#include "Type.h"
#include <string>

class TypeFirst : public Type
{
public:
	std::string name;
	std::string surname;
	int age;

	TypeFirst();
	TypeFirst(std::string name, std::string surname, int age);
};