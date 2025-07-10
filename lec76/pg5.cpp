#include <iostream>
#include <stdexcept>
using namespace std;

class AmountInvalidError : public runtime_error {
public:
    AmountInvalidError(const string &msg) : runtime_error(msg) {}
};

class Customer {
    string name;
    int account_number, balance;

public:
    Customer(string name, int account_number, int balance) {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
    }

    void credit(int amount) {
        if (amount > 0) {
            balance += amount;
            cout << amount << " Rs credited to your account. New balance: " << balance << " Rs\n";
        } else {
            throw AmountInvalidError("Amount must be greater than 0 for credit.");
        }
    }

    void withdraw(int amount) {
        if (amount <= 0) {
            throw AmountInvalidError("Amount must be greater than 0 for withdrawal.");
        }
        if (amount > balance) {
            throw runtime_error("Insufficient balance.");
        }

        balance -= amount;
        cout << amount << " Rs debited from your account. Remaining balance: " << balance << " Rs\n";
    }
};

int main() {
    Customer C1("Ayan", 23, 5000);

    try {
        C1.credit(500);      // Valid credit
        C1.withdraw(6000);   // Will throw runtime_error (insufficient balance)
        C1.credit(100);      // This won't execute
    } catch (const AmountInvalidError &e) {
        cout << "AmountInvalidError occurred: " << e.what() << endl;
    } catch (const runtime_error &e) {
        cout << "RuntimeError occurred: " << e.what() << endl;
    } catch (const bad_alloc &e) {
        cout << "Memory allocation failed: " << e.what() << endl;
    } catch (...) {
        cout << "An unknown exception occurred." << endl;
    }

    return 0;
}
