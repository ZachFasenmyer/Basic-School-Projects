// Zachary Fasenmyer
#include <iostream>
#include <iomanip>
using namespace std;
const int MAXGRADE = 25; // maximum number of grades per student
const int MAXCHAR = 30; // maximum characters used in a name
typedef char StringType30[MAXCHAR + 1];// character array data type for names
// having 30 characters or less.
typedef float GradeType[MAXGRADE]; // one dimensional integer array data type
float findGradeAvg(GradeType, int); // finds grade average by taking array of
// grades and number of grades as parameters
char findLetterGrade(float); // finds letter grade from average given
// to it as a parameter
int main()
{
char letterGrade;
StringType30 firstname, lastname;// two arrays of characters defined
float numOfGrades; // holds the number of grades
GradeType grades; // grades defined as a one dimensional array
float average; // holds the average of a student's grade
char moreInput; // determines if there is more input
cout << setprecision(2) << fixed << showpoint;
// Input the number of grades for each student
cout << "Please input the number of grades each student will receive." << endl
<< "This must be a number between 1 and " << MAXGRADE <<  " inclusive" << endl;
cin >> numOfGrades; 
while (numOfGrades > MAXGRADE || numOfGrades < 1)
{
cout << "Please input the number of grades for each student." << endl
<< "This must be a number between 1 and " << MAXGRADE
<< " inclusive\n";
cin >> numOfGrades;
}
// Input names and grades for each student
cout << "Please input a y if you want to input more students"
<< " any other character will stop the input" << endl;
cin >> moreInput;
while (moreInput == 'y' || moreInput == 'Y')
{
cout << "Please input the first name of the student" << endl;
cin >> firstname;
cout << endl << "Please input the last name of the student" << endl;
cin >> lastname;
for (int count = 0; count < numOfGrades; count++)
{
cout << endl << "Please input a grade" << endl;
// Fill in the input statement to place grade in the array
cin >> grades[count];
}
findGradeAvg(grades, numOfGrades);
cout << firstname << " " << lastname << " has an average of " << average;

findLetterGrade(numOfGrades);
cout << " which gives the letter grade of " << letterGrade;
// Fill in code to get and print average of student to screen
// Fill in call to get and print letter grade of student to screen
cout << endl << endl << endl;
cout << "Please input a y if you want to input more students"
<< " any other character will stop the input" << endl;
cin >> moreInput;
}
return 0;
}

//***********************************************************************
// findGradeAvg
//
// task: This function finds the average of the
// numbers stored in an array.
//
// data in: an array of integer numbers
// data returned: the average of all numbers in the array
//
//***********************************************************************
float findGradeAvg(GradeType grades, int numOfGrades)
{
// Fill in the code for this function
float total;
float average;
for (int count = 0; count < numOfGrades; count++)
	{total += grades[count];}
average = total / numOfGrades;	

return average;
}
//***********************************************************************
// findLetterGrade
//
// task: This function finds the letter grade for the number
// passed to it by the calling function
//
// data in: a floating point number
// data returned: the grade (based on a 10 point spread) based on the number
// passed to the function
//
//***********************************************************************
char findLetterGrade(float numOfGrades)
{
float average;	
char letterGrade;
// Fill in the code for this function
if (average >= 90)
	letterGrade = 'A';
else if (average >= 80)
	letterGrade = 'B';
else if (average >= 70)
	letterGrade = 'C';
else if (average >= 60)
	letterGrade = 'D';
else
	letterGrade = 'F'; 
	
return letterGrade;
} 
