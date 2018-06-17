#pragma once
#include "Type.h"

class Tree
{
	struct Node {
		Type *obj;
		Node *son;
		Node *brother;

		Node(Type &obj);

	};

	Node *root;
public:
	Tree();
	~Tree();

	void add(Type &obj);
	void deleteSubTree(Node *&node);

private:
	void add(Node *&node, Type &obj);
};