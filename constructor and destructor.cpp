/*ry to write a class called Rectangle that:

Has a default constructor that sets width and height to 1
Has a parameterized constructor that takes width and height
Has a function area() that returns width × height
Has a destructor that prints "Rectangle destroyed"*/
#include<iostream>
using namespace std;
class Rectangle {
	public:
		double width;
		double height;
		Rectangle() {
			width=1;
			height=1;
		}
		Rectangle(double x,double y) {
			width=x;
			height=y;
		}
		double area() {
			return width*height;
		}
		~Rectangle() {//destructor
			cout<<"Rectangle destroyed \n";//destructors are executed at the end
		}
};
int main() {
	Rectangle r1;// calls default constructor
	cout<<"AREA= "<<r1.area()<<endl;
	Rectangle r2(3,7);	//aalls parameterized constructor		
	//wrong=>cout<<"AREA= "<<r2.area(2,3)<<endl;
	cout<<"AREA= "<<r2.area()<<endl;
}