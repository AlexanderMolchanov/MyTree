#include "Tree.h"



Tree::Tree()
{
	root = nullptr;
}


Tree::~Tree()
{
	deleteSubTree(root);
}

void Tree::add(Type & obj)
{
	add(root, obj);
}

void Tree::deleteSubTree(Node *& node)
{
	if (node->son != nullptr)
		deleteSubTree(node->son);

	if (node->brother != nullptr)
		deleteSubTree(node->brother);

	delete node;
}

void Tree::add(Node *& node, Type & obj)
{
	if (node == nullptr)
	{
		node = new Node(obj);
	}
	else if (&obj < node->obj)
	{
		add(node->son, obj);
	}
	else
	{
		add(node->brother, obj);
	}
}

Tree::Node::Node(Type & obj)
{
	this->obj = &obj;
	this->son = nullptr;
	this->brother = nullptr;
}
