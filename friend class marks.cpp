//Create a class Student with a private member marks
//Set it in the constructor
//Write a friend function isPass(Student s) that checks if marks >= 50
//Print "Pass" or "Fail" from the friend function
#include<iostream>
using namespace std;
class student{
	int marks;
	public:
		student(int marks){
			this->marks=marks;
		}
		friend void isPass(student x);
};
void isPass(student x){
	if(x.marks>=60){
		cout<<"PASS \n";
	}else
	cout<<"Fail \n";
}
int main(){
	student s1(79);
	isPass(s1);
}