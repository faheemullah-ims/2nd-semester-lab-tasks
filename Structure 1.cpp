
//Task 1: Declare a structure Book with members bookID, title, and price. Initialize a
//structure variable using curly braces and print its values.

#include<iostream>
using namespace std;
struct book{
	int id;
	string title;
	double price;
};
int main()
{
	book book1;
	book1={23421,"Atomic habits",499};
	cout<<"Book 1 id: "<<book1.id<<endl;
	cout<<"book 1 title: "<<book1.title<<endl;
	cout<<"BOOK 1 price: "<<book1.price<<endl;
	return 0;
}
