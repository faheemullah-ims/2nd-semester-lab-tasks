//4.	Create a class Employee with name and salary. Display employee details.
#include<iostream>
#include<string>
using namespace std;
class employee{
	public: 
	string name;
	float salary;
};
int main()
{
	employee e1;
	cout<<"Enter the name of emoloyee 1: ";
	getline(cin,e1.name);
	cout<<"Enter salary of employee 1: ";
	cin>>e1.salary;
	cout<<e1.name<<" has salary of "<<e1.salary<<" rupees" <<endl;
	return 0;
}