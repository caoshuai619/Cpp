#include "Node.h"
#include <iostream>
using namespace std;


Node::Node()
{
}


Node::~Node()
{
	
}
Node::Node(int data)
{
	this->data = data;
	this->next = NULL;
}