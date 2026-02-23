//1.	Create a class Student with private data members name and roll number. Use setter and display functions.
#include<iostream>
using namespace std;
class student{
	private:
		string name;
		int rollno;
	public:
		void setter(string n,int r)
		{
			name=n;
			rollno=r;
		}
		void display()
		{
			cout<<"Name= "<<name<<endl;
			cout<<"Roll no= "<<rollno<<endl;
		}
};
int main()
{
	student s1;
	s1.setter("Faheem ullah",10);
	s1.display();
}