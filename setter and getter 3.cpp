//3.	Create a BankAccount class with deposit and display functions.
#include<iostream>
using namespace std;
class account{
	private:
		int balance;
	public:
	void setbalance(int b)
	{
		balance=b;
	}
	void deposit(int amount)
	{
		balance+=amount;
	}
	void display()
	{
		cout<<"New balance= "<<balance<<endl;
	}
};
int main()
{
	account acc1;
	cout<<"enter the current amount: ";
	int balance;
	cin>>balance;
	cout<<"enter the amount deposited: ";
	int deposit;
	cin>>deposit;
	acc1.setbalance(balance);
	acc1.deposit(deposit);
	acc1.display();
	
}