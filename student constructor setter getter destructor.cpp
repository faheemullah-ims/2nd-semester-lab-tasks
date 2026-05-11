#include<iostream>
using namespace std;
class student {
		string name;//private by default
		int rollno;
		double marks;
	public:
		//default constructor
		student() {
			name="bakhtirehman";
			rollno=8;
			marks=76;
		}
		//paremeterized constructor
		student(string name,int rollno,double marks) {
			this->name=name;
			this->rollno=rollno;
			this->marks=marks;
		}
		//setter function to set data
		void setdata(string name,int rollno,double marks) {
			this->name=name;
			this->rollno=rollno;
			this->marks=marks;
		}
		//getter functions
		string getname() {
			return name;

		}
		int getrollno() {
			return rollno;
		}
		double getmarks() {
			return marks;
		}
		char grade(double marks) {
			if (marks>=87&&marks<=100) {
				return 'A';
			} else if (marks>=80&&marks<=86) {
				return 'B';
			} else if (marks>=72&&marks<=79) {
				return 'C';
			} else if (marks>=67&&marks<=71) {
				return 'D';
			} else if (marks>=60&&marks<=66) {
				return 'E';
			} else {
				return 'F';
			}
		}
		//display function
		void display() {
			cout<<"name= "<<name<<endl;
			cout<<"roll no= "<<rollno<<endl;
			cout<<"marks: "<<marks<<endl;
			cout<<"grade: "<<grade(marks)<<endl;
			cout<<"-------------------------"<<endl;
		}
		~student() {//destructo=>dealocates memory
			// C++ automatically destroys objects in REVERSE order
			//first created last destroyed
			cout << "Destructor called: " << name << " is destroyed" << endl;
		}
};
int main() {
	student s1;
	s1.display();//call default constructor
	student s2("Ali",22,86);//call paremeteroized constructor
	s2.display();
	student s3;
	s3.setdata("ikram",14,69);//call setter function
	s3.display();
	return 0;
}