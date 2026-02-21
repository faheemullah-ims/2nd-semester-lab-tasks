//5.	Create a class Car with brand and model year. Display car information.
#include<iostream>
using namespace std;
class car{
	public:
	string brand;
	int model_year;
};
int main()
{
	car c1;
	cout<<"Enter the brand name of 1st car: ";
	getline(cin,c1.brand);//to ignore spaces in name
	cout<<"Enter model year of employee 1st car: ";
	cin>>c1.model_year;
	cout<<"Brand of 1st car: "<<c1.brand<<endl;
	cout<<"MOdel of 1st car: "<<c1.model_year<<endl;
	return 0;
}