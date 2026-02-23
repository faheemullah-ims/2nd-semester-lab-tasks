//5.	Create a class Calculator with add, subtract, and multiply functions.
#include<iostream>
using namespace std;
class calculator{
	int num1,num2;
	public: 
	void setvalues(int a,int b)
	{
		num1=a;
		num2=b;	
	}
	void add(int num1,int num2)
	{
		cout<<"Sum= "<<num1+num2<<endl;
	}
	void subtract(int num1,int num2)
	{
		cout<<"Diference= "<<num1-num2<<endl;
	}
	void product(int num1,int num2)
	{
		cout<<"product= "<<num1*num2<<endl;
	}		
};
int main()
{
	calculator c1;
	int a,b;
	cout<<"enter 1st number: ";
	cin>>a;
	cout<<"enter 2nd number:";
	cin>>b;
	int choice;
	cout<<"enter  1 to add these numbers"<<endl;
		cout<<"enter  2 to subtract these numbers"<<endl;
			cout<<"enter  3 to multiply  these numbers"<<endl;
			cin>>choice;
			switch(choice)
			{
				case 1:
					c1.add(a,b);
					break;
					case 2:
						c1.subtract(a,b);
						break;
						case 3:
							c1.product(a,b);
							break;
							default:
								cout<<"Invalid choice "<<endl;
			}
	return 0;
}