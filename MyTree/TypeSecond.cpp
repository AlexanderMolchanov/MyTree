#include "TypeSecond.h"

TypeSecond::TypeSecond(std::string str1, std::string str2, int field3, int number_of_point) : str1(str1), str2(str2), field3(field3)
{
	Point *arr = new Point[number_of_point];
	for (int i = 0; i < number_of_point; ++i)
	{
		arr[i].x = rand() % 100;
		arr[i].y = rand() % 100;
	}
}

TypeSecond::~TypeSecond()
{
	delete[] arr;
}