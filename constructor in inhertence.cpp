#include<iostream>
using namespace std;
class person {
	public:
		string name;
		int age;
		//parameterized constructor
		person(string n,int a) {
			name=n;
			age=a;
		}
		//function to display person detail
		void displayperson() {
			cout<<"person name : "<<name<<endl;
			cout<<"person age: "<<age<<endl;
		}
};
class student: public person {
	public:
		int rollno;
		student(string x,int y,int z):person(x,y) { //calling parent constructor is necesary
			//x and y are passed to parent constructor
			name=x;
			age=y;
			rollno=z;
		}
		void displaystudent() {
			cout<<"student name : "<<name<<endl;
			cout<<"student age: "<<age<<endl;
			cout<<"roll no of "<<name<<" is "<<rollno<<endl;
		}
};
int main() {
	person p1("faheem",20);//creat person object
	student s2("Ali",21,99);//creat student object
	p1.displayperson();
	s2.displaystudent();
	return 0;
}
