// Chapter 13, Programming Challenge 2: Employee Class
#include <iostream>
#include <iomanip>
#include <string>

#include "Employee.h"
using namespace std;


// Function prototype
void displayEmployee(Employee);

// Driver program to demonstrate the class
int main()
{
   // Create an Employee object to test constructor #1.
	Employee susan;
   // Create susan
	susan.setName("Susan Meyers");
	susan.setIDNumber(47899);
	susan.setDepartment("Accounting");
	susan.setPosition("Vice President");
   
   // Create an Employee object to test constructor #2.
	Employee mark;
   // Create mark
	mark.setName("Mark Jones");
	mark.setIDNumber(39119);
	mark.setDepartment("IT");
	mark.setPosition("Programmer");

   // Create an Employee object to test constructor #3.
	Employee joy;
   // Create joy
	joy.setName("Joy Rogers");
	joy.setIDNumber(81774);
	joy.setDepartment("Manufacturing");
	joy.setPosition("Engineer");
   
   // Display each employee's data.
   cout << left << setw(20) << "Name" << setw(15) << "IDNumber" << setw(15) << "Department" << setw(15) << "Position";
   displayEmployee(susan);
   displayEmployee(mark);
   displayEmployee(joy);

   return 0;
}

//**************************************************
// The displayEmployee function displays the data  *
// in the Employee object passed as an argument.   *
//**************************************************

void displayEmployee(Employee displayEmployee1) //in between step is to remember EMPLOYEE the class, is a DATA TYPE. It must often be used to define a variable.
{
 cout << left << setw(20) << "Name" << setw(15) << "IDNumber" << setw(15) << "Department" << setw(15) << "Position" << endl;
 cout << left << setw(20) << displayEmployee1.getName() << setw(15) << displayEmployee1.getIDNumber()  << setw(15) << displayEmployee1.getPosition();
}

//h file used for someone else to communicate with your program, like a map.
//Don't forget the inbetween steps
//Mon Wed Room 312 from 12-2
//Tue Thur Room 205 from 12-3
