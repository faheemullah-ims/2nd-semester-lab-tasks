//2.	Create a class Rectangle and calculate area using member functions.
#include<iostream>
using namespace std;
class rectangle{
	private:
		int length;
		int width;
	public:
		void setter(int l,int w)
		{
			length=l;
			width=w;
		}
		int getl()
		{
			return length;
		}
		int getw()
		{
			return width;
		}
};
int main()
{
	rectangle r1;
	int l,w;
	cout<<"enter length and width :";
	cin>>l>>w;
	r1.setter(l,w);
	cout<<"Areaa= "<<r1.getl()*r1.getw();
}