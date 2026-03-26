#include<iostream>
using namespace std;
class Heros {//base class
	protected:
		string name;
		string type;
		double health;
		double power;
		int experience;
	public:
		Heros(string name,string type,int health,double power,int experience) {
			//parent constructor to initialize value
			//this pointer refers to current variable in the scope
			//this pointer used when two variables have same name
			this->name=name;
			this->type=type;
			this->health=health;
			this->power=power;
			this->experience=experience;
		}
		//comon function for all heros
		void showmessage() {
			cout<<"---Fantacy battle arena----"<<endl;
			cout<<"Each hero has diferent attack and defence abilities"<<endl;
		}
		//pure virtual functions to create abstract class=>polyporphism
		//these functions must be overiden in child class to make child class non abstract

		virtual double attack()=0;
		virtual double defend()=0;

		//this function display comon information of all heros
		virtual void displayinfo() {
			cout<<"Name: "<<name<<endl;
			cout<<"Health: "<<health<<endl;
			cout<<"Type: "<<type<<endl;
			cout<<"Exeperience: "<<experience<<endl;
			cout<<"Power: "<<power<<endl;
		}
};
//warior class
class Warior : public Heros {
	private://data members only releated to warior
		string weapon;
		double armor;
		double rage;
	public:
		Warior(string n, int h, double p, int e, string w, double a, double r)
			: Heros(n, "Warrior", h, p, e) { //passing these parameters to parent constructor
			//initializing other private parameters
			weapon = w;
			armor = a;
			rage = r;
		}
		//overiding parent pure virtual function
		//overide keyword not necessary in c++
		double attack() override {
			// Strong physical attack
			return power * 2 + rage * 1.5;//calculate warior attack
		}

		double defend() override {
			return armor + health * 0.3;//calculate warior defence
		}
		void displayinfo() override {
			Heros::displayinfo();//scope resolution to unhide parent function
			cout << "Weapon: " << weapon << endl;
			cout << "Armor Strength: " << armor << endl;
			cout << "Rage Level: " << rage << endl;
		}
};
//mage class
class Mage : public Heros {
	private:
		string spell;
		double mana;
		double multiplier;

	public:
		Mage(string n, int h, double p, int e, string s, double m, double mul)
			: Heros(n, "Mage", h, p, e) {
			//initializing extra derived class datamembers
			spell = s;
			mana = m;
			multiplier = mul;
		}

		double attack() override {
			// Magical attack
			return power * multiplier + mana * 1.2;//calculate total attack damage
		}

		double defend() override {
			return mana * 0.8 + health * 0.2;//calculate mage defence
		}

		void displayinfo() override {
			Heros::displayinfo();
			cout << "Spell: " << spell << endl;
			cout << "Mana Points: " << mana << endl;
			cout << "Magic Multiplier: " << multiplier << endl;
		}
};
//Archer class
class Archer:public Heros {
	private:
		string bowType;
		int arrows;
		double accuracy;

	public:
		Archer(string n, int h, double p, int e,string b, int a, double acc)//passing to parent constructor=>
			: Heros(n, "Archer", h, p, e) {
			bowType = b;
			arrows = a;
			accuracy = acc;
		}

		double attack() override {
			// Precision attack
			return power * accuracy + arrows * 0.5;//calculate archer attack
		}

		double defend() override {
			return accuracy * 50 + health * 0.2;//calculate warior defence
		}

		void displayinfo() override {
			Heros::displayinfo();
			cout << "Bow Type: " << bowType << endl;
			cout << "Arrows: " << arrows << endl;
			cout << "Accuracy: " << accuracy << endl;
		}
};
int main() {
	//creating objects of classes
	Warior W1("Grom", 130, 55, 85, "Axe", 45, 25);//calling constrtuctor
	Mage M1("Elara", 85, 65, 90, "Lightning Staff", 70, 3.0);
	Archer A1("Fyn", 95, 50, 75, "Crossbow", 55, 1.2);
	// Show common message
	W1.showmessage();
	//data for warior
	cout<<"=====WARIOR====="<<endl;
	W1.displayinfo();
	cout << "Attack Value: " << W1.attack ()<< endl;//calling attack function for warior w1
	cout << "Defense Value: " << W1.defend()<< endl;//calling defend function for warior w1
	
	//data for mage
	cout << "=====MAGE====="<<endl;
	M1.displayinfo();
	cout<<"Attack Value: "<<M1.attack()<<endl;
	cout<<"Defense Value: "<<M1.defend()<<endl;
	
	//data for archer
	cout<<"===== ARCHER====="<<endl;
	A1.displayinfo();
	cout << "Attack Value: "<< A1.attack()<<endl;
	cout << "Defense Value: "<<A1.defend()<<endl;
	//summary
	
		// ===== SUMMARY =====
	cout<<"<-----BATTLE SUMMARY----->"<<endl;

	double maxAttack = W1.attack();//stores highest attack value so far
	string bestHero = "Warrior";//storers name of best hero
	//comparing heros attack powers
	//hero with highest attack is considered as best hero
	if (M1.attack()>maxAttack) {
		maxAttack=M1.attack();//update maximum attack value if condition is satisfied
		bestHero="Mage";
	}

	if (A1.attack()>maxAttack) {
		maxAttack=A1.attack();
		bestHero="Archer";//archer is declared as best hero if condition is satisfied
	}
	
	//printing name of highest attack hero and its attack value
	cout<<"Highest Attack Hero: "<<bestHero<< endl;
	cout<<"Attack Value: "<<maxAttack<<endl;
	cout << "<=======THE END======>";
	return 0;
}
