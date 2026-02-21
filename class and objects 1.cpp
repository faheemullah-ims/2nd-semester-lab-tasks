//Create a class Student with data members name and roll number. Assign values and
//display them.
#include<iostream>
using namespace std;
class student {
	public:
	string name;
	int rollno;
};
int main()
{
	student s1;
	s1.name="Ali";
	s1.rollno=34;
	cout<<"Name: "<<s1.name<<endl;
	cout<<"Roll no: "<<s1.rollno<<endl;
}