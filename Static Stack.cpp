//Demonstration of staticStack class template
#include <iostream>
#include "StaticStack.h"

using namespace std;

int main()
{
	int storePop; //holds popped values
	
	staticStack<int> stack(5);
	
	cout << "Now pushing 7" << endl;
	stack.push(7);
	cout << "Now pushing 13" << endl;
	stack.push(13);
	cout << "Now pushing 24" << endl;
	stack.push(24);
	cout << "Now pushing 38" << endl;
	stack.push(38);
	cout << "Now pushing 123456789" << endl;
	stack.push(123456789);
	
	cout << "Popping stack..." << endl;
	stack.pop(storePop);
	cout << storePop << endl;
	stack.pop(storePop);
	cout << storePop << endl;
	stack.pop(storePop);
	cout << storePop << endl;
	stack.pop(storePop);
	cout << storePop << endl;
	stack.pop(storePop);
	cout << storePop << endl;
		
	return 0;
}


