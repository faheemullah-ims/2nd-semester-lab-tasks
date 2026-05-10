#include <iostream>
using namespace std;
class number {
	private:
		int value;
	public:
		void setvalue(int v) {
			value=v;
		}
		number operator /(number n) {
			number temp;
			temp.value=value/n.value;
			return temp;
		}
		number operator -(number n) {
			number temp;
			temp.value=value-n.value;
			return temp;
		}
		number operator *(number n) {
			number temp;
			temp.value=value*n.value;
			return temp;
		}
		number operator +(number n) {
			number temp;
			temp.value=value+n.value;
			return temp;
		}

		void display() {

			cout<<value<<endl;
		}

};
int main() {
	number n1,n2,n3,n4,n5,n6;
	n1.setvalue(10);
	n2.setvalue(5);
	n3=n1/n2;
	n4= n1 - n2;
	n5=n1*n2;
	n6=n1+n2;
	cout<<"division: ";
	n3.display();
	cout<<"difference: ";
	n4.display();
	cout<<"product: ";
	n5.display();
	cout<<"addition";
	n6.display();
}
