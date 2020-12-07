// Chapter 15, Programming Challenge 1: Employee and ProductionWorker classes
#include <iostream>
#include <iomanip>
#include "ProductionWorker.h"
#include <string>

using namespace std;

// Function prototype
void displayInfo(ProductionWorker);

int main()
{
    //temporary variables for inputting with user-input
    string name;
    int idNumber;
    string hireDate2;
    string shift2;
    double payRate2;
    
	// Create ProductionWorker object using default constructor
    ProductionWorker worker1;
	cout << "Please enter the employee's name" << endl;
	cin >> name; //temporary variable
	worker1.setName(name);
	cout << "Please enter the employee's ID number" << endl;
	cin >> idNumber;
	worker1.setIDNumber(idNumber);
	cout << "Please enter the employee's hire date" << endl;
	cin >> hireDate2;
	worker1.setHireDate(hireDate2);
	cout << "Please enter the employee's shift (day or night)" << endl;
	cin >> shift2;
	worker1.setShift(shift2);
	cout << "Please enter the employee's pay rate" << endl;
	cin >> payRate2;
	worker1.setPayRate(payRate2);
	// Call displayInfo to print ProductionWorker's contents
	displayInfo(worker1);

    // Create ProductionWorker object by passing all the employee's data as arguments to the constructor
	ProductionWorker worker2;
	cout << "Please enter the employee's name" << endl;
	cin >> name; //temporary variable
	worker2.setName(name);
	cout << "Please enter the employee's ID number" << endl;
	cin >> idNumber;
	worker2.setIDNumber(idNumber);
	cout << "Please enter the employee's hire date" << endl;
	cin >> hireDate2;
	worker2.setHireDate(hireDate2);
	cout << "Please enter the employee's shift (day or night)" << endl;
	cin >> shift2;
	worker2.setShift(shift2);
	cout << "Please enter the employee's pay rate" << endl;
	cin >> payRate2;
	worker2.setPayRate(payRate2);
	// Call displayInfo to print ProductionWorker's contents
	displayInfo(worker2);
	return 0;
}

//******************************************************
// The displayInfo function displays a production      *
// worker's employment information.                    *
//******************************************************
void displayInfo(ProductionWorker e)
{
	cout << setprecision(2) << fixed << showpoint;
	cout << "Name: " 
		 << e.getName() << endl;
	cout << "Employee number: " 
		 << e.getIDNumber() << endl;
	cout << "Hire date: " 
		 << e.getHireDate() << endl;
	cout << "Shift: " 
		<< e.getShiftName() << endl; // optional
	cout << "Pay rate: " 
		 << e.getPayRate() << endl;
}
