//Demonstrates Dynamic Stack template - Error testing
#include "Error Testing - DynamicStack.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int storePop; //Holds popped values
	
	//Class object
	dynamicStack<int> stack1(0);
	
	stack1.badAlloc(); //tries stack for bad allocation
	
	//determine stack size;
	int size1;
	cout << "Please enter the stack size" << endl;
	cin >> size1;
	stack1.getStackSize(size1);
	
	//Prompt for values
	stack1.enterPush();
	
	//Popping the values out of the stack
	stack1.outputPop(); 
	
	return 0;
}

