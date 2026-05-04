#include<iostream>
using namespace std;

class Employee {
	protected:
		string name;
		int id;

	public:
		void setData() {
			cout << "Enter Name: ";
			cin >> name;
			cout << "Enter ID: ";
			cin >> id;
		}

		virtual void display() {
			cout << "Name: " << name << endl;
			cout << "ID: " << id << endl;
		}
};

class FullTimeEmployee : public Employee {
	private:
		float salary;

	public:
		void setFullTime() {
			setData();
			cout << "Enter Monthly Salary: ";
			cin >> salary;
		}

		void display() override {
			cout << "\n Full Time Employee \n";
			cout << "Name: " << name << endl;
			cout << "Salary: " << salary << endl;
		}
};

class PartTimeEmployee : public Employee {
	private:
		int hours;
		float rate;

	public:
		void setPartTime() {
			setData();
			cout << "Enter Hours Worked: ";
			cin >> hours;
			cout << "Enter Hourly Rate: ";
			cin >> rate;
		}

		void display() override {
			cout << "\n Part Time Employee \n";
			cout << "Name: " << name << endl;
			cout << "Salary: " << hours * rate << endl;
		}
};

int main() {
	Employee* e;

	FullTimeEmployee f;
	PartTimeEmployee p;

	cout << "\nEnter Full Time Employee:\n";
	f.setFullTime();

	cout << "\nEnter Part Time Employee:\n";
	p.setPartTime();

	e = &f;
	e->display();   // runtime polymorphism

	e = &p;
	e->display();   // runtime polymorphism

	return 0;
}