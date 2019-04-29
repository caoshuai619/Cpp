#include "Stack.h"
#include <iostream>
using namespace std;



Stack::Stack()
{
	this->s = new int[this->N];
}


Stack::~Stack()
{
	if (this->s != NULL)
	{
		delete[] s;
		s = NULL;
		N = 0;


	}
}

int Stack::pop()
{
	if (this->top == -1) {
		cout << "The Stack is empty" << endl;
		return -1;
	}
	return s[top--];


}

void Stack::push(int data)
{
	if (top == N - 1)
	{
		int *temp = new int[this->N * 2];
		for (int i = 0; i < N; i++)
		{
			temp[i] = s[i];
		}
		this->N = this->N * 2;
		s = new int[this->N];
		for (int i = 0; i < N; i++)
		{
			s[i] = temp[i];
		}
		delete[] temp;
		temp = NULL;
	}
	this->s[++top] = data;
}

bool Stack::isEmpty()
{
	return this->top == -1;
}

Stack::Stack(const Stack & s)
{
	this->N = s.N;
	this->top = s.top;
	this->s = new int[this->N];
	for (int i = 0; i < N; i++)
	{
		this->s[i] = s.s[i];
	}
}

void Stack::operator=(const Stack & s)
{
	if (this == &s) return;
	if (this->s != NULL)
	{
		delete[] this->s;
		this->s = NULL;
		this->top = -1;
		this->N = 0;

	}
	this->N = s.N;
	this->top = s.top;
	this->s = new int[this->N];
	for (int i = 0; i < this->N; i++)
	{
		this->s[i] = s.s[i];
	}
}

int Stack::getlen()const
{
	return this->top+1;
}

bool Stack::operator==(const Stack & s)
{
	if (this->top != s.top) return false;
	for (int i = 0; i < this->top; i++)
	{
		if (this->s[i] != s.s[i])
		{
			return false;
		}
	}
	return true;
}

int Stack::operator[](int index) const
{
	return this->s[index];
}

ostream & operator<<(ostream& os, const Stack &s)
{
	for (int i = s.getlen()-1; i>-1; i--)
	{
		os << s[i]<<" ";
	}
	os << endl;
	return os;
}
