#include<iostream>
using namespace std;
class person {//base class general person
	private:
		string name;
		int age;
	public://assign data from main
		void getpersondata(string n,int a) {
			name=n;
			age=a;
		}//display function
		void showpersondata() {
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
		}
};
class Developer {//base class developer
	private:
		string programinglanguage;
		int yearsofexperience;
	public:
		void getdevloperdata(string l,int y) {
			programinglanguage=l;
			yearsofexperience=y;
		}
		void showdeveloperdata() {
			cout<<"programing language : "<<programinglanguage<<endl;
			cout<<"years of experience: "<<yearsofexperience<<endl;
		}
};
class Manager {//base class mananger
		int teamsize;
		string department;
	public:
		void getmanagerdata(int  t,string d) {
			teamsize=t;
			department=d;
		}
		void showmanagerdata() {
			cout<<"team size: "<<teamsize<<endl;
			cout<<"department: "<<department<<endl;
		}
};
//tech lead have properties of all these 3 classses
//so this is multiple inheretece
class Techlead:public person,public Developer,public Manager {
	public://function to display all data of techlead
		void showtechlead() {
			showpersondata();//person data
			showdeveloperdata();//developer data
			showmanagerdata();//manager data
		}
};
int main() {
	Techlead t1;
	t1.getpersondata("Faheem",20);
	t1.getdevloperdata("python",1);
	t1.getmanagerdata(3,"computer science");
	cout<<"Tech lead data "<<endl;
	t1.showtechlead();
	return 0;
}