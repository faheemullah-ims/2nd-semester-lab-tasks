#include<iostream>
using namespace std;

// Base Class (Abstract)
class Account {
private:
    int account_number;

protected:
    double balance;

public:
    // Constructor
    Account(int acc, double bal) {
        account_number = acc;
        balance = bal;
    }

    // Getter
    int getAccountNumber() {
        return account_number;
    }

    double getBalance() {
        return balance;
    }

    // Setter
    void setBalance(double bal) {
        balance = bal;
    }

    // Function Overloading
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void deposit(double amount, string note) {
        balance += amount;
        cout << "Deposited: " << amount << " (" << note << ")" << endl;
    }

    // Virtual Function
    virtual void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance!\n";
        }
    }

    // Pure Virtual Function (Abstraction)
    virtual void display() = 0;
};

// Derived Class 1
class SavingsAccount : public Account {
private:
    double min_balance;

public:
    SavingsAccount(int acc, double bal, double min_bal)
        : Account(acc, bal) {
        min_balance = min_bal;
    }

    // Function Overriding
    void withdraw(double amount) override {
        if (balance - amount >= min_balance) {
            balance -= amount;
            cout << "Savings Withdrawn: " << amount << endl;
        } else {
            cout << "Cannot withdraw! Minimum balance required.\n";
        }
    }

    void display() override {
        cout << "\n--- Savings Account ---\n";
        cout << "Account No: " << getAccountNumber() << endl;
        cout << "Balance: " << balance << endl;
        cout << "Minimum Balance: " << min_balance << endl;
    }
};

// Derived Class 2
class CurrentAccount : public Account {
private:
    double overdraft_limit;

public:
    CurrentAccount(int acc, double bal, double limit)
        : Account(acc, bal) {
        overdraft_limit = limit;
    }

    // Function Overriding
    void withdraw(double amount) override {
        if (balance - amount >= -overdraft_limit) {
            balance -= amount;
            cout << "Current Withdrawn: " << amount << endl;
        } else {
            cout << "Overdraft limit exceeded!\n";
        }
    }

    void display() override {
        cout << "\n--- Current Account ---\n";
        cout << "Account No: " << getAccountNumber() << endl;
        cout << "Balance: " << balance << endl;
        cout << "Overdraft Limit: " << overdraft_limit << endl;
    }
};

// Main Function
int main() {
    // Create objects
    SavingsAccount s1(101, 5000, 1000);
    CurrentAccount c1(202, 2000, 1500);

    // Savings Account Operations
    s1.deposit(1000);
    s1.deposit(500, "Bonus");
    s1.withdraw(4500);
    s1.display();

    // Current Account Operations
    c1.deposit(2000);
    c1.withdraw(3000);
    c1.display();

    return 0;
}