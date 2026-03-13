#include<iostream>
using namespace std;
class person{
	public: 
	string name;
	person(string n){
		name=n;
	}
};
class employee:public person{
	public :
		double salary;
		employee(string n,double s):person(n)//calls person constructor to set name
		{
			salary=s;//initializes salary
		}
};
class manager:public employee{
	public:
		string department;
		manager(string n,double s,string d):employee(n,s)//calls employe construcror which also cals person constructor
		{								//Base constructor ? Derived constructor ? Further derived constructor
			department=d;//initializes salary
		}
		void display()
		{
			cout<<"name: "<<name<<endl;
			cout<<"salary: "<<salary<<endl;
			cout<<"department: "<<department<<endl;
		}
};
int main()
{
	manager m1("ali",22200,"softwaare engenering");
	m1.display();
}