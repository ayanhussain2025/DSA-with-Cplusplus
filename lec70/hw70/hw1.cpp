//  Day 99/180 Object Oriented Programming

// 3 Programming Challenges with Classes:
// 1. Bank Customer Class:
// Challenge: Design a Customer class for a bank system that manages customer information and basic operations.
// Attributes:
// name: String containing the customer's full name.
// accountNumber: Unique integer identifying the customer's account.
// accountBalance: Double representing the current balance in the account.
// isActive: Boolean indicating whether the account is active.
// Methods:
// deposit(amount): Adds the specified amount to the account balance.
// withdraw(amount): Deducts the specified amount from the account balance (check for sufficient funds).
// transfer(amount, targetAccount): Transfers the specified amount to another customer's account (within the system).
// printDetails(): Prints the customer's name, account number, and current balance.
#include<iostream>
using namespace std;

class Customer {
    public:
        string name;
        int accountNumber;

    private:
        double accountBalance;
        bool isActive;

    public:
        Customer(string n, int accNo) {
            name = n;
            accountNumber = accNo;
            accountBalance = 1000;
            isActive = true;
        }

        void deposit(double amount) {
            if (isActive && amount > 0) {
                accountBalance += amount;
            }
        }

        void withdraw(double amount) {
            if (isActive && accountBalance >= amount) {
                accountBalance -= amount;
            }
        }

        void transfer(double amount, Customer &targetAccount) {
            if (isActive && accountBalance >= amount) {
                accountBalance -= amount;
                targetAccount.deposit(amount);
                cout << amount << " transferred to account number " << targetAccount.accountNumber << endl;
            }
        }

        void printDetails() {
            cout << "\n--- Customer Account Details ---\n";
            cout << "Name: " << name << endl;
            cout << "Account Number: " << accountNumber << endl;
            cout << "Balance: ₹" << accountBalance << endl;
            cout << "Status: " << (isActive ? "Active" : "Inactive") << endl;
        }
};

int main() {
    Customer A("Ayan Hussain", 1234);
    Customer B("Imran", 3210);

    A.deposit(200);
    A.printDetails();

    A.transfer(100, B);
    A.printDetails();
    B.printDetails();

    A.withdraw(300);
    A.printDetails();

    return 0;
}
