#include "TypeFirst.h"

TypeFirst::TypeFirst()
{
}

TypeFirst::TypeFirst(std::string name, std::string surname, int age) : m_name(name), m_surname(surname), m_age(age)
{
}

void TypeFirst::setName(std::string name)
{
	m_name = name;
}

void TypeFirst::setSurname(std::string surname)
{
	m_surname = surname;
}

void TypeFirst::setAge(int age)
{
	m_age = age;
}

std::string TypeFirst::getName()
{
	return m_name;
}

std::string TypeFirst::getSurname()
{
	return m_surname;
}

int TypeFirst::getAge()
{
	return m_age;
}
