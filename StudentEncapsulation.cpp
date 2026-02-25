#include<iostream>
#include<string>
using namespace std;

// Student class representing a single student object
class student {

    // Private data members (Data Hiding / Encapsulation)
    string name;
    int rollno;
    float marks;

public:

    // Setter function to assign values to private data members
    // "this->" is used to distinguish class variables from parameters
    void setter(string name,int rollno,float marks) {
        this->name=name;
        this->rollno=rollno;
        this->marks=marks;
    }

    // Getter function to access student name
    string getname() {
        return name;
    }

    // Getter function to access roll number
    int getrollno() {
        return rollno;
    }

    // Getter function to access marks
    float getmarks() {
        return marks;
    }

    // Function to calculate and return grade
    // Note: It uses stored class marks (not external value)
    char displaygrade(int m) {
        char grade;

        // Grade calculation based on marks
        if(marks>=80)
            grade='A';
        else if(marks>=60)
            grade='B';
        else if(marks>=40)
            grade='C';
        else
            grade='F';

        return grade;
    }
};

int main() {

    // Creating student object
    student s;

    // Variables to take input
    string name;
    int marks;
    int rollno;

    // Taking user input
    cout<<"Enter name: ";
    getline(cin,name);

    cout<<"Enter marks : ";
    cin>>marks;

    cout<<"Enter rollno: ";
    cin>>rollno;

    // Setting values into object using setter
    s.setter(name,rollno,marks);

    // Accessing values using getters
    cout<<"Name: "<<s.getname()<<endl;
    cout<<"Rollno= "<<s.getrollno()<<endl;
    cout<<"Marks: "<<s.getmarks()<<endl;

    // Calling grade function
    cout<<"Grade : "<<s.displaygrade(marks)<<endl;

    return 0;
}