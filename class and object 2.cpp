#include<iostream>
using namespace std;
//Create a class Rectangle with length and width. Calculate and display the area.
class rectangle{
	public:
		float length;
		float width;
	float area(float length,float width)
	{
		return length*width;
	}
};
int main()
{
	rectangle r1;
	r1.length=5.6;
	r1.width=4.3;
	cout<<"Area= "<<r1.area(r1.length,r1.width);
}