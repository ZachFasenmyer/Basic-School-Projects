//Demonstration of Static Queue template
#include <iostream>
#include <string>
#include "StaticQueue.h"

using namespace std;

const int SIZE = 10;

int main()
{
	string word;
	
	staticQueue<string> queue1(SIZE);
	
	//Demonstrate Enqueue
	for (int count = 0; count < SIZE; count++)
	{
		cout << "Enter a word: " << endl;
		getline(cin, word);
		queue1.enqueue(word);
	}
	
	cout << "\nThese are the words you entered: " << endl;
	for (int count = 0; count < SIZE; count++)
	{
		queue1.dequeue(word);
		cout << word << endl;
	}
	
	return 0;
}
