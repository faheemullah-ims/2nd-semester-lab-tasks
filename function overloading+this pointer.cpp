//Create a Calculator class with an overloaded function called calculate().
//It should have 3 versions: calculate(int a, int b) for addition,
//calculate(float a, float b) for average, and calculate(int a, int b, int c)
//for sum of 3 numbers. Use the this pointer inside at least one function to
//return the object itself. Call all versions from main() and print results.
#include<iostream>
using namespace std;
class calculator {
	private:
		int result;
	public:
		calculator(int r=0) {
			result=r;
		}
		int calculate(int a,int b) {
			this->result=a+b;
			return this->result;//using this pointer
		}

		float calculate(float a,float b) {
			float avrg=(a+b)/2;
			return avrg;
		}
		int calculate(int a,int b,int c) {
			this->result=a+b+c;
			return this->result;//using this pointer
		}

};
int main() {
	calculator cal;

	int x, y, z;
	float a, b;

	cout << "Enter 2 integers: ";
	cin >> x >> y;
	cout << "Enter 2 float numbers: ";
	cin >> a >> b;
	cout << "Enter 3 integers: ";
	cin >> x >> y >> z;
	cout << "Sum of 2 integers: "<<cal.calculate(x, y) << endl;
	cout << "Average of 2 numbers: "<<cal.calculate(a, b) << endl;
	cout <<"Sum of 3 integers: "<<cal.calculate(x, y, z) << endl;
	return 0;
}

