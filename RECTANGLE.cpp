#include<iostream>
using namespace std;
class Rectangle{
	private:
		double length;
		double width;
		public:
			Rectangle(double length,double width){
				this->length=length;
				this->width=width;
			}
			double calculatearea(){
				return length*width;
			}
			double calculateperimeter(){
			 return 2*(length+width);	
			}
			void display(){
				cout<<"Length= "<<length<<endl;
				cout<<"Width= "<<width<<endl;
				cout<<"Area= "<<calculatearea()<<endl;
				cout<<"Perimeter= "<<calculateperimeter()<<endl;
			}
};
int main(){
	double length,width;
	cout<<"Enter length of rectangle: ";
	cin>>length;
	cout<<"Enter width of rectangle: ";
	cin>>width;
	
	Rectangle r1(length,width);
	r1.display();
	return 0;
}
