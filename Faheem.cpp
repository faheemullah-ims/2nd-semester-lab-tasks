#include<iostream>
using namespace std;

class RideSystem {
protected:
    string customerName;
    int tripID;
    double initialFare;

public:
    RideSystem(int id, string name, double fare) {
        customerName=name;
        tripID=id;
        initialFare=fare;
    }

    virtual void displayInfo() {}
    virtual double calculateAmount() {
        return 0;
    }
};

class EconomyRide : public RideSystem {
    double distance;

public:
    EconomyRide(int id, string name, double fare, double km)
        : RideSystem(id,name,fare) {
        distance = km;
    }

    double calculateAmount() override {
        return initialFare + distance*8;
    }

    void displayInfo() override {
        cout<<"\n--- Economy Ride ---\n";
        cout<<"Customer Name: "<<customerName<<endl;
        cout<<"Trip ID: "<<tripID<<endl;
        cout<<"Total Fare: "<<calculateAmount()<<endl;
    }
};

class LuxuryRide : public RideSystem {
    double distance;
    double serviceCharge;

public:
    LuxuryRide(int id, string name, double fare, double km, double charge)
        : RideSystem(id,name,fare) {
        distance=km;
        serviceCharge=charge;
    }

    double calculateAmount() override {
        return initialFare + distance*8 + serviceCharge;
    }

    void displayInfo() override {
        cout<<"\n--- Luxury Ride ---\n";
        cout<<"Customer Name: "<<customerName<<endl;
        cout<<"Trip ID: "<<tripID<<endl;
        cout<<"Total Fare: "<<calculateAmount()<<endl;
    }
};

int main() {
    EconomyRide r1(1,"ayub",100,5);
    LuxuryRide r2(2,"ikram",100,20,400);
    r1.calculateAmount();
    r1.displayInfo();
    r2.calculateAmount();
    r2.displayInfo();
    return 0;
}