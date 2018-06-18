#pragma once
#include "Type.h"
#include <string>

class TypeFirst : public Type
{
	std::string m_name;
	std::string m_surname;
	int m_age;
public:

	TypeFirst();
	TypeFirst(std::string name, std::string surname, int age);

	void setName(std::string name);
	void setSurname(std::string surname);
	void setAge(int age);

	std::string getName();
	std::string getSurname();
	int getAge();
};