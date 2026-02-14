#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
struct student{
	int rollno;
	string name;
	float marks;
};
int main()
{
	student s[3];
	for(int i=0;i<3;i++)
	{
		cout<<"enter roll no of student "<<i+1<<": ";
		cin>>s[i].rollno;
		cin.ignore();   // ? clears leftover newline
		cout<<"enter name of student "<<i+1<<": ";
		getline(cin,s[i].name);
		cout<<"enter marks of student "<<i+1<<": ";
		cin>>s[i].marks;
		cout<<"--------------------------------"<<endl;
	}
	
	cout<<setw(10)<<"ROLL NO"<<setw(20)<<"NAME"<<setw(10)<<"MARKS"<<endl;
	for(int i=0;i<3;i++)
	{
	cout<<setw(10)<<s[i].rollno<<setw(20)<<s[i].name<<setw(10)<<s[i].marks<<endl;	
	}
	
	float totalmarks=0;
	float average;
	for(int i=0;i<3;i++)
	{
		totalmarks+=s[i].marks;
	}
	average=totalmarks/3;
	cout<<"The total marks of  3 students is "<<totalmarks<<endl;
	cout<<"The average marks are "<<average<<endl;
	return 0;
}