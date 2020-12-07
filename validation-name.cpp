#include <iostream> 
#include <iomanip>
#include <string>
#include "names.h"

using namespace std; 

bool isValidName(string name);

int main() 
{
	string name = "";
	bool valid = false;
	
	while(valid == false){
	cout << "Please, enter your full name: " << endl;
	// user input
	cin >> name;
	if(name.length() > 20){
	cout << "name is too big" << endl << "Re-enter name" << endl;
	cin >> name;}
	
	// repeat until user enters valid input
	if(isValidName(name) == true)
	{
		cout << "Welcome, " << name << endl;
		valid = true;
	}
	else
	{
		cout << "Invalid characters detected (No white space, use underscore instead): " << endl << endl;
		valid = false;
	}
}
	
	return 0;
}

// isValidName function
bool isValidName(string name){
	bool isValid = false;
	for(int c = 0; c < 8; c++){	
	if(name == namesArray[c]){
		isValid = true;
		} else {
			isValid = false;
		}
	}
return isValid;	
}
