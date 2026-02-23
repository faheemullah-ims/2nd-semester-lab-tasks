#include<iostream>
#include<string>
using namespace std;
class student {
	private:
		string name;
		int rollno;
		int marks;
	public:
		void setter(string name,int rollno,int marks) {
			this->name=name;
			this->rollno=rollno;
			this->marks=marks;
		}
		int getmarks() {
			return marks;
		}
		int getrollno() {
			return rollno;
		}
		string getname() {
			return name;
		}
};
int main() {
	int n;
	cout<<"Enter number of students: ";
	cin>>n;//ask the user to decide the size of array
	cin.ignore();	//cin.ignore() removes leftover input (usually \n) from the buffer so the next input works correctly.
	student s[n];
	int rollno;
	string name;
	int marks;
	for(int i=0; i<n; i++) {
		cout<<"Enter name of student "<<i+1<<" : ";
		getline(cin,name);
		cin.ignore();
		cout<<"Enter marks of student "<<i+1<<": ";
		cin>>marks;
		cin.ignore();
		cout<<"Enter rollno of student "<<i+1<<" : ";
		cin>>rollno;
		cin.ignore();
		s[i].setter(name,rollno,marks);//It stores those values inside that student object’s private variables at i index
									   //after each iteration
		cout<<"---------------------------"<<endl;
	}
	char choice;
	cout<<"Do you want to display the details of students y/n: ";
	cin>>choice;//asking the user to disolay the details or not
	if(choice=='y'||choice=='Y') {
		cout<<"-----students details-------"<<endl;
		for(int i=0; i<n; i++) {
			cout<<"Student "<<i+1<<" detail "<<endl;
			cout<<"Name: "<<s[i].getname()<<endl;
			cout<<"Marks: "<<s[i].getmarks()<<endl;
			cout<<"Rollno: "<<s[i].getrollno()<<endl;
			cout<<"============================="<<endl;
		}
	}
	return 0;
}
