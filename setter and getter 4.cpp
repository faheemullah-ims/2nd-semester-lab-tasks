//4.	Create a class Employee that calculates yearly salary.
#include<iostream>
using namespace std;
class salary{
	private:
		int salary;
	public:
		void setsalary(int s)
		{
			salary=s;
		}
		int getsalary()
		{
			return salary*12;
		}
};
int main()
{
	salary s1;
	int salary;
	cout<<"Enter monthly salary: ";
	cin>>salary;
	s1.setsalary(salary);
	cout<<"Yearly salary= "<<s1.getsalary()<<endl;
	return 0;	
}