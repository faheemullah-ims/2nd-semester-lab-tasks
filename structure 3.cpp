//Task 3: Declare and initialize an array of structures for a Car with members carID, model,
//and price. Print the details of each car using a loop.
#include<iostream>
using namespace std;
struct car{
	int carId;
	int model;
	double price;
};
int main()
{
	//array of structure
	car cars[3]={{222,2005,500000.0},{223,2007,700000.0},{224,2010,900000.0}};
	//displaying the contents
	for(int i=0;i<3;i++)
	{
		cout<<"id of  car "<<i+1<<": "<<cars[i].carId<<endl;
		cout<<"model of  car "<<i+1<<": "<<cars[i].model<<endl;
		cout<<"price of  car "<<i+1<<": "<<cars[i].price<<endl;
		cout<<"------------------------"<<endl;
	}
	return 0;
}
