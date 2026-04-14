#include<iostream>
#include<string>
using namespace std;
class BankAccount{
	protected :
		string accountholder;
		double balance;
		public:

			BankAccount(string name,double amt){
			accountholder=name;
			balance=amt;
			}
			//we marks this virtual sp derived class can provide 
			//their own specific logic later
			virtual double shopingDiscount(double billAmount){
				return 0.0;//default no discount
			}
};

class plateniumAccount:public BankAccount
{
	public:
	plateniumAccount(string name,double amt):BankAccount(name,amt){
	//this is calling parent constructor to initialize the attributes
	//no extra features or attributes
	}
	//overiding parent parent  discount function
	double shopingDiscount (double billAmount){
		return billAmount*0.70;//30% discount applied
	}
};
class baseAccount:public BankAccount
{
	public:
	baseAccount(string name,double amt):BankAccount(name,amt){
	//calling parent constructor to initialize 
	}
	//overiding parent discount function
	double shopingDiscount (double billAmount){//reuse one function again according to need
		return billAmount*0.90;//10% discount applied
	}
};
int main()
{
	plateniumAccount p1("Faheem",2000);
	baseAccount b1("Ali",5000);
	double bill;
	cout<<"Enter your bill: ";
	cin>>bill;
	cout<<"Discount price on platenium Account= "<<p1.shopingDiscount(bill)<<endl;
	cout<<"Discount price on basic Account= "<<b1.shopingDiscount(bill)<<endl;
	return 0;
}
