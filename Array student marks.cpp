#include<iostream>
using namespace std;
class student {
	private :
		string name;
		int marks[5];
	public:
		student(string n,int m[]) {
			name=n;
			for(int i=0; i<5; i++) {
				marks[i]=m[i];
			}
		}
		float average() {
			int sum=0;
			for(int i=0; i<5; i++) {
				sum+=marks[i];
			}
			return sum/5;
		}
		void display() {
			cout<<"Student name: "<<name<<endl;
			for(int i=0; i<5; i++) {
				cout<<"marks of student "<<i+1<<" = "<<marks[i]<<endl;
			}
			cout<<"average= "<<average()<<endl;
		}
};
int main() {
	int m[5]= {87,78,90,86,69};
	          student s1("faheem",m);
	s1.display();
}