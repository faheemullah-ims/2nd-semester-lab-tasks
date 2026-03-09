#include<iostream>
using namespace std;
class demo{
	public:
		demo(){//constucto and destrutor name same as class name
			cout<<"construtor is called! \n";
		}
		~demo(){//destructor are called in the end
			cout<<"destructor is called! \n";
			cout<<"i= "<<i<<endl;
		}
	
};
int main()
{
	demo d1;//constructor is called
	demo d2;
	demo d3;
	demo d4;
	demo d5; //first called destructed last,last called destructed first(descending order)
	return 0; // Destructor will be called automatically when object goes out of scope(program ends)
	
}