//Create a class called Student with private data members: name (string), rollNumber (int),
// and GPA (float). Add public member functions to set the values and display them in a formatted profile card style.
// Create 2 student objects with different data and dilaysplay both. This task teaches you how a class bundles data
//  + functions together, and why we keep data private.
#include<iostream>
using namespace std;
class student {
	private:
		string name;
		int rollno;
		float gpa;
	public:
		void setdata(string name,int rollno,float gpa) {
			this->name=name;
			this->rollno=rollno;
			this->gpa=gpa;
		}
		string getname() {
			return name;
		}
		int getrollno() {
			return rollno;
		}
		float getgpa() {
			return gpa;
		}
		void display() {
			cout<<"========================="<<endl;
			cout<<"	STUDENT PROFILE "<<endl;
			cout<<"========================="<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Roll no: "<<rollno<<endl;
			cout<<"Gpa: "<<gpa<<endl;
			cout<<"-------------------------"<<endl;
		}
};
int main() {
	student s1,s2;
	s1.setdata("Faheem",11,3.40);
	s2.setdata("Ali",18,3.70);
	s1.display();
	s2.display();
	return 0;
}