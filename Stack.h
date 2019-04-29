#pragma once
#include "Node.h"
#include <iostream>
using namespace std;
class Stack
{
public:
	Stack();
	~Stack();
	void pop();
	void push(int data);
	int getTop();
	bool isEmpty();
	void display();
private:
	Node* top;
};

