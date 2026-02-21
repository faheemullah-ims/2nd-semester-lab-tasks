//3.	Create a class Book with title and author. Display book information.
#include<iostream>
using namespace std;
class Book{
	public:
	string title;
	string author;
};
int main()
{
	Book b1;
	b1.title="Atomic habits";
	b1.author="James clear";
	cout<<"Book name is" <<b1.title<<" written by "<<b1.author<<endl;
	return 0;
}