#include<iostream>
#include<string>
using namespace std;
class Ride {
	public:
		string pasenger_name;
		int rideid;
		double basefare;
		Ride(string n,int i,double bf) //constructor
		{ 
			pasenger_name=n;
			rideid=i;
			basefare=bf;
		}
		virtual double final_fare() {
			return 0;
		}
		void display_ride() {
			cout<<"pasenger name: "<<pasenger_name<<endl;
			cout<<"Ride id: "<<rideid<<endl;
		}
};
class economy_ride:public Ride {
	public:
		double distancekm;
		economy_ride(string n,int i,double bf,double d):Ride(n,i,bf) {
			distancekm=d;
		}
		double final_fare() {
			return basefare+(distancekm*8);
		}
		void display_economy() {
			display_ride();

		}
};
class luxury_ride:public Ride {
	public:
		double distancekm;
		double service_charge;
		luxury_ride(string n,int i,double bf,double d,double sc):Ride(n,i,bf) {
			distancekm=d;
			service_charge=sc;
		}
		double final_fare() {
			return basefare+(distancekm*12)+service_charge;
		}
		void display_economy() {
			display_ride();
		}
};
int main() {

	string name;
	int rideid;
	double basefare;
	double distancekm;
	double service_charge;
	int choice;
	cout<<"===city ride system==="<<endl;
	cout<<"Enter 1 for economy ride "<<endl;
	cout<<"Enter 2 for luxury ride "<<endl;
	cout<<"Enter 3 to exit program" <<endl;
	cin>>choice;
	switch(choice) {
		case 1: {
			cout<<"====ECONOMY RIDE==="<<endl;
			cout<<"Enter pasenger name: ";
			cin.ignore();
			getline(cin,name);
			cout<<"Enter ride id: ";
			cin>>rideid;
			cout<<"Enter base fare: ";
			cin>>basefare;
			cout<<"Enter distance in km: ";
			cin>>distancekm;
			economy_ride e1(name,rideid,basefare,distancekm);
			cout<<"Your ticket has been confirmed "<<endl;
			e1.display_economy();
			cout<<"Final fare: "<<e1.final_fare();
			break;
		}
		case 2: {
			cout<<"====LUXURY RIDE==="<<endl;
			cout<<"Enter pasenger name: ";
			cin.ignore();//remove unwanted characters move to next line
			getline(cin,name);
			cout<<"Enter ride id: ";
			cin>>rideid;
			cout<<"Enter base fare: ";
			cin>>basefare;
			cout<<"Enter distance in km: ";
			cin>>distancekm;
			cout<<"Enter service charge: ";
			cin>>service_charge;
			luxury_ride l1(name,rideid,basefare,distancekm,service_charge);//object creation calling constructor
			cout<<"Your ticket has been confirmed "<<endl;
			l1.display_economy();
			cout<<"Final fare: "<<l1.final_fare();
			break;
		}
		case 3: {
			cout<<"program Exited" <<endl;
			break;
		}
		default: {
			cout<<"Invalid choice"<<endl;
		}
	}
	return 0;
}
