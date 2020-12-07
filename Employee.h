// Employee Class Declaration
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee
{
private:
   // Employee's name
   string Name;
   // ID number
   double IDNumber;
   // Department name
   string Department;
   // Employee's position
   string Position;
   
public:
   // 3 Constructors
   Employee(string Name, double IDNumber, string Department, string Position)
   {
	this->Name = Name;
	this->IDNumber = IDNumber;
	this->Department = Department;
	this->Position = Position;
   };
   
   Employee(string Name, double IDNumber)
   {
	this->Name = Name;
	this->IDNumber = IDNumber;
	Department = "";
	Position = "";
   };
   
   Employee()
   {
	Name = "";
    IDNumber = 0;
	Department = "";
	Position = "";  
   };
  
   // 4 Mutators
   void setName(string Name1)
   {
   	this->Name = Name1;
   };
   void setIDNumber(double IDNumber1)
   {
   	this->IDNumber = IDNumber1;
   };
   void setDepartment(string Department1)
   {
   	this->Department = Department1;
   };
   void setPosition(string Position1)
   {
   	this->Position = Position1;
   };
   
   // 4 Accessors
   string getName() const
   {
   	return Name;
   };
   double getIDNumber() const
   {
   	return IDNumber;
   };
   string getDepartment() const
   {
   	return Department;
   };
   string getPosition() const
   {
   	return Position;
   };
};
#endif

//this is an index. Final project without shortcuts should be Immutable.
