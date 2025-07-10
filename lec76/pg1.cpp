#include<iostream>
using namespace std;

class Customer
{
    string name;
    int account_number,balance;
    public:
    Customer(string name,int account_number,int balance)
    {
        this->name=name;
        this->account_number=account_number;
        this->balance=balance;
    }

    void credit(int amount)
    {
        if(amount>0)
        cout<<amount<<" Rs is credit to your account\n";
        else cout<<"amount must be greter than 0\n"; //handling exception here
    }

    void withdraw(int amount)
    {
        if(amount>0&&amount<=balance)
        {
            cout<<amount<<" Rs is debit from your account\n";
        }
        //handling exception here
        else if(amount<0)
        cout<<"amount must be greater than 0\n";
        else cout<<"balance is not sufficient\n";
    }
};

int main()
{
    Customer C1("Ayan",23,5000);
    C1.credit(500);
    C1.withdraw(6000);
    return 0;
}