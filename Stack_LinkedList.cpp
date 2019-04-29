#include "Stack.h"
#include <iostream>
#include "Node.h"
using namespace std;



Stack::Stack()
{
	this->top = NULL;
}


Stack::~Stack()
{
	if (this->top != NULL)
	{
		delete this->top;
		this->top = NULL;
	}
}

void Stack:: pop()
{
	if (this->top == NULL) {
		cout << "The stack is empty" << endl;
		return;
	}
	Node* temp=new Node;
	temp = this->top;
	top = top->next;
	delete temp;
	temp = NULL;


}
void Stack::push(int data)
{
	Node* newNode = new Node(data);
	
	newNode->next = this->top;
	this->top = newNode;
}
int Stack::getTop()
{
	if (this->top == NULL) return -1;
	return this->top->data;
}

bool Stack::isEmpty()
{
	return this->top == NULL;
}

void Stack::display()
{
	Node* temp = this->top;
	while (temp != NULL)
	{
		cout << temp->data << ",";
		temp = temp->next;
	}
}
