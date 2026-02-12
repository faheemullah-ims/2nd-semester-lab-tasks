// Task 2: Create a program that declares a structure Employee with members 
// empID, name, and salary. Take input from the user and display the information.

#include<iostream>   // Include input/output stream library
using namespace std; // Allows us to use standard names like cout and cin without std::


// Define a structure named Employee
struct Employee{
	int empid;      // Stores employee ID
	string name;    // Stores employee name
	double salary;  // Stores employee salary
};

int main()
{
	// Create an object of Employee structure
	Employee E1;

	// Take employee name as input from the user
	cout<<"Enter name of 1st employee: ";
	cin>>E1.name;

	// Take employee ID as input
	cout<<"Enter id of 1st employee: ";
	cin>>E1.empid;

	// Take employee salary as input
	cout<<"Enter salary of 1st employee: ";
	cin>>E1.salary;

	// Display the entered employee name
	cout<<"Name of 1st employee is: "<<E1.name<<endl;

	// Display the entered employee ID
	cout<<"ID of 1st employee is: "<<E1.empid<<endl;

	// Display the entered employee salary
	cout<<"Salary of 1st employee is: "<<E1.salary<<endl;

	return 0;  // Indicates successful program execution
}
