#include<iostream>
#include<string>
using namespace std;
class Book {
	public:
		string author;
		string title;
		string bookid;
		//constructor
		Book(string author,string title,string bookid) {
			this->author=author; //this pointer points to the current object
			this->title=title;
			this->bookid=bookid;
		}

		virtual void displayinfo() {
			cout<<"Book title: "<<title<<endl;
			cout<<"Book author: "<<author<<endl;
			cout<<"Book id: "<<bookid<<endl;
		}
};
class Printedbook:public Book {
	public:
		int no_pages;
		Printedbook(string author,string title,string bookid,int no_pages): Book(author,title,bookid) {
			this->no_pages=no_pages;
		}
		void displayinfo() {
			cout<<"============================================="<<endl;
			cout<<"Printed book"<<endl;//scope resolution unhide parent display function
			Book::displayinfo();
			cout<<"Number of pages: "<<no_pages<<endl;
		}
};
class Ebook:public Book {
	public:
		double filesize;
		Ebook(string author,string title,string bookid,double filesize): Book(author,title,bookid) {
			this->filesize=filesize;//
		}
		void displayinfo() {
			cout<<"============================================="<<endl;
			cout<<"E book"<<endl;
			Book::displayinfo();
			cout<<"File size: "<<filesize<<" mb "<<endl;
		}
};
int main() {
	cout<<"Enter 1 for printed book"<<endl;
	cout<<"Enter 2 for E book"<<endl;
	cout<<"Enter 3 to exit program"<<endl;
	int choice;
	cin>>choice;
	do {
		switch (choice) {
			case 1: {
				Printedbook p1("Clean Code","Robert C. Martin","B101",464);
				p1.displayinfo();
				break;
			}
			case 2: {
				Ebook e1(" Stanley B. Lippman"," C++ Primer","B103",987);
				e1.displayinfo();
				break;
			}
			case 3: {
				cout<<"Program exited"<<endl;
				break;
			}
			default:
				cout<<"Invalid choice"<<endl;

		}
		cin>>choice;
	} while(choice!3);
	return 0;
}


