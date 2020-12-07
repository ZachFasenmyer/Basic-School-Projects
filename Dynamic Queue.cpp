//Demonstrates dynamicQ template
#include "DynamicQueue.h"
#include <string>
#include <iostream>

using namespace std;

const int SIZE = 10;

int main()
{
	string word;
	
	//Create Q
	dynamicQ<string> Q1;
	
	for(int count = 0; count < SIZE; count++)
	{
		cout << "Enter a word" << endl;
		getline(cin, word);
		Q1.enQ(word);
	}
	
	//deQ words and display
	cout << "These are the words you chose:" << endl;
	for(int count = 0; count < SIZE; count++)
	{
		Q1.deQ(word);
		cout << word << endl;
	}
	return 0;
}
