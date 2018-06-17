#include "Tree.h"
#include "TypeFirst.h"
#include "TypeSecond.h"
#include "TypeThird.h"
#include <iostream>

int main() {

	Tree tree;

	TypeFirst first("Alex", "Molch", 21);
	TypeSecond second("Oleo", "Mack", 31, 8);
	TypeThird third;

	tree.add(first);
	tree.add(second);
	tree.add(third);

	system("pause");
	return 0;
}