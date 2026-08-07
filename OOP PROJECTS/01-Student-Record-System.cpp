//Task 1 — Student Record System (Beginner)
//Concepts
//Classes & Objects
//Constructors
//Getters/Setters
//Encapsulation
//Requirements
//Create a Student class with:
//Name
//Roll Number
//GPA
//Functions:
//Input student data
//Display student data
//Update GPA
//Bonus
//Calculate whether the student is on the Dean's List (GPA ≥ 3.5).
#include<iostream>
using namespace std;
class student {
	private:
		string name;
		int rollno;
		double gpa;
	public:
		student(){
			name="supra";
			rollno=420;
			gpa=1.5;
		}
		student(string name,int rollno,double gpa) {
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
		double getgpa() {
			return gpa;
		}
		void input() {
			cout<<"Enter name of student: ";
			getline(cin,name);
			cout<<"Enter roll no: ";
			cin>>rollno;
			cout<<"Enter gpa: ";
			cin>>gpa;
		}
		void updategpa(double ngpa) {
			gpa=ngpa;
		}


		void scholarsip_eligibility() {
			if(gpa >=3.5) {
				cout<<"Eligible for scholarship \n";
			} else {
				cout<<"Not eligible for scholarship \n";
			}
		}
		void display() {
			cout<<"Name: "<<name<<endl;
			cout<<"Roll no: "<<rollno<<endl;
			cout<<"Gpa: "<<gpa<<endl;

		}
};
int main() {
	student s;
	s.input();
	char upategpa;
	cout<<"Do you want to update gpa y\n: "<<endl;
	cin>>upategpa;
	if(upategpa=='y') {
		double ngpa;
		cout<<"Enter new gpa : ";
		cin>>ngpa;
		s.updategpa(ngpa);
	}
	s.display();
	cout<<"Do you want to chech scholarship eligibility y\n : "<<endl;
	char sch_elig;
	cin>>sch_elig;
	if(sch_elig=='y') {
		s.scholarsip_eligibility();
	}
}