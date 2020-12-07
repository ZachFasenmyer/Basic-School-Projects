//Zachary Fasenmyer
#include <iostream>
using namespace std;

long long int factorial(long long int);

int main(){
	//initialize number, result
	long long int number = 0;
	char repeat = 'Y';
    
    //loop with prompt to repeat
    while(repeat == 'Y'){
	//prompt the user for input
	cout << "Enter a number, between 0 and 14, to find it's factorial: ";
    //take users input
    cin >> number;
    cout << endl;
    //if cin < 0 || cin > 14, prompt cin
	if(number < 0 || number > 14){
    	cout << "Invalid. Try again:";
    	cin >> number;
	}
	
	//output the results
	cout << "The factorial of " << number << " is: " << factorial(number) << endl;			   
	
	cout << "Continue? Y/N: ";
	cin >> repeat;
	cout << endl;           
	}
    return 0;}
    
long long int factorial(long long int input){
	if(input > 1)
		return input * factorial(input - 1);
	else
		return 1;
}
