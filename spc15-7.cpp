// Chapter 15, Programming Challenge 7: PersonData and CustomerData classes
#include <iostream>
#include "PersonData.h"
#include "CustomerData.h"
using namespace std;

// Function prototype
void displayCustomer(CustomerData);

int main()
{
	//input variables for class member functions
	string lastName2;
	string firstName2;
	string address2;
	string city2;
	string state2;
	int zip2;
	int customerNumber2;
	bool mailingList2;
   // Create a CustomerData object and pass arguments
   // to the constructor.
   CustomerData customer1 (7, false);
   
   // Display the object's data.
   cout << "Customer #1\n"
        << "-----------\n";
    cout << "Please enter Customer #1's Last Name:" << endl;
    cin >> lastName2;
    customer1.setLastName(lastName2);
    cout << "Please enter Customer #1's First Name:" << endl;
    cin >> firstName2;
    customer1.setFirstName(firstName2);
    cout << "Please enter Customer #1's Address:" << endl;
    cin >> address2;
    customer1.setAddress(address2);
    cout << "Please enter Customer #1's City:" << endl;
    cin >> city2;
    customer1.setCity(city2);
    cout << "Please enter Customer #1's State:" << endl;
    cin >> state2;
    customer1.setState(state2);
    cout << "Please enter Customer #1's Zip code:" << endl;
    cin >> zip2;
    customer1.setZip(zip2);
    cout << "Please enter Customer #1's Customer number:" << endl;
    cin >> customerNumber2;
    customer1.setCustomerNumber(customerNumber2);
    cout << "Do they want to be places on the mailing list? (1 for Yes or 0 for No)" << endl;
    cin >> mailingList2;
    customer1.setMailingList(mailingList2);
   displayCustomer(customer1);
   
   // Create another CustomerData object using the default
   // constructor and mutator functions.
   CustomerData customer2 (9, false);
    cout << "Customer #2\n"
        << "-----------\n";
	cout << "Please enter Customer #1's Last Name:" << endl;
    cin >> lastName2;
    customer2.setLastName(lastName2);
    cout << "Please enter Customer #1's First Name:" << endl;
    cin >> firstName2;
    customer2.setFirstName(firstName2);
    cout << "Please enter Customer #1's Address:" << endl;
    cin >> address2;
    customer2.setAddress(address2);
    cout << "Please enter Customer #1's City:" << endl;
    cin >> city2;
    customer2.setCity(city2);
    cout << "Please enter Customer #1's State:" << endl;
    cin >> state2;
    customer2.setState(state2);
    cout << "Please enter Customer #1's Zip code:" << endl;
    cin >> zip2;
    customer2.setZip(zip2);
    cout << "Please enter Customer #1's Customer number:" << endl;
    cin >> customerNumber2;
    customer2.setCustomerNumber(customerNumber2);
    cout << "Do they want to be places on the mailing list? (1 for Yes, 0 for No)" << endl;
    cin >> mailingList2;
    customer2.setMailingList(mailingList2);
   // Display the object's data.
   
   displayCustomer(customer2);
   return 0;
}

//******************************************************
// The displayCustomer function accepts a CustomerData *
// object as its argument and displays the object's    *
// data.                                               *
//******************************************************

void displayCustomer(CustomerData c)
{
   // Display all the data but mailing list...
   cout << "Last Name: " << c.getLastName() << endl
        << "First Name: " << c.getFirstName() << endl
        << "Address: " << c.getAddress() << endl
        << "City: " << c.getCity() << endl
        << "State: " << c.getState() << endl
        << "ZIP: " << c.getZip() << endl 
        << "Customer Number: " 
        << c.getCustomerNumber() << endl
        << "Mailing List? ";

   // Dispaly Yes or No for mailing list.
   if (c.getMailingList())
        cout << "Yes\n\n";
   else
         cout << "No\n\n";
}
