#include<iostream>
using namespace std;
class Add1 {
	public :
		int a,b;
		void input() {
			cout<<"enter 2 numbers from add 1: ";
			cin>>a>>b;
		}
		int getsum() {
			return a+b;
		}
};
class Add2 {
	public :
		int x,y;
		void input() {
			cout<<"enter 2 numbers from add 2: ";
			cin>>x>>y;
		}
		int getsum() {
			return x+y;
		}
};
class product {
	public :
		int d,e;
		void input() {
			cout<<"enter 2 numbers from product:  ";
			cin>>d>>e;
		}
		int getproduct() {
			return d*e;
		}
};
//wraper class;
class wrap {
	private:
		Add1 obj1;
		Add2 obj2;
		product obj3;
	public:
		void process(){
			int choice;
			cout << "ENTer your choce: "<< endl;
			cout << "1 for add1: " << endl;
			cout << "2 for add2: " << endl;
			cout << "3 for product : " << endl;
			cin  >> choice;
			switch(choice){
				case 1:
					obj1.input();
					cout<<"sum from Add 1= "<<obj1.getsum()<<endl;
					break;
				case 2:
					obj2.input();
					cout<<"sum from Add 2= "<<obj2.getsum()<<endl;
					break;
				case 3:
					obj3.input();
					cout<<"product from  product  class= "<<obj3.getproduct()<<endl;
					break;	
					default:
					cout<<"Invalid choice "<<endl;		
			}
		}
	

};
int main(){
	wrap cal;
	cal.process();
}