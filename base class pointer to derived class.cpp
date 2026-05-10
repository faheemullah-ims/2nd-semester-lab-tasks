#include<iostream>
using namespace std;
class Animal {
	public:
		// Virtual function allows derived classes
		// to override this function
		virtual	void sound() {
			cout<<"All animals make sound \n";
		}
};
//Derived classes
//overiding sound funcion in each child class
class Dog:public Animal {
	public:
		void sound() {
			cout<<"Dog Barks "<<endl;
		}
};
class Cat:public Animal {
	public:
		void sound() {
			cout<<"Cat Meow "<<endl;
		}
};
class Cow:public Animal {
	public:
		void sound() {
			cout<<"Cow MOO "<<endl;
		}
};
class Lion:public Animal {
	public:
		void sound() {
			cout<<"Lion Roars"<<endl;
		}
};
class Duck:public Animal {
	public:
		void sound() {
			cout<<"Duck Quack "<<endl;
		}
};
int main() {
	// Pointer of base class Animal
	Animal *An;
	// Creating objects of derived classes
	Dog d;
	Cat c;
	Cow co;
	Lion l;
	Duck du;
	// Base class pointer points to Dog object
	An=&d;
	An->sound();  // Calls Dog's sound()
	// Base class pointer points to Cat object
	An=&c;
	An->sound(); // Calls Cat's sound()
	// Base class pointer points to Cow object
	An=&co;
	An->sound(); // Calls Cow's sound()
	// Base class pointer points to Lion object
	An=&l;
	An->sound();// Calls Lion's sound()
	// Base class pointer points to Duck object
	An=&du;
	An->sound();// Calls Duck's sound()
	return 0;
}
////KEY CONCEPTS
//Inheritance ? Dog, Cat, Cow, Lion, and Duck inherit from Animal
//Function Overriding ? each class provides its own sound() function
//Polymorphism ? base class pointer Animal *An calls different sound() functions at runtime
//Virtual Function ? enables runtime binding (dynamic polymorphism)