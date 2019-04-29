#include <iostream>
#include "Stack.h"
using namespace std;
int main()
{
	Stack s;
	s.push(1);
	s.push(2);
	s.display();
	cout << endl;
	s.pop();
	s.display();
	cout << endl;
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);
	s.push(90);
	s.display();
	cout << endl;
	cout << "top=" << s.getTop() << endl;
	return 0;
}