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
        throw "amount must be greter than 0"; //throw is used to through the exception and catch is used to catch the exception
    }

    void withdraw(int amount)
    {
        if(amount>0&&amount<=balance)
        {
            cout<<amount<<" Rs is debit from your account\n";
        }
        //handling exception here
        else if(amount<0)
        throw"amount must be greater than 0";
        throw "balance is not sufficient";
    }
};

int main()
{
    Customer C1("Ayan",23,5000);
    try
    {
        //code written in try block is giving exception
        C1.credit(500); 
        C1.withdraw(6000); //this sttement will give error then throw will throw error and catch will catch it and we go out form the program
        C1.credit(100);//this will not run
    }catch(const char *e)
    {
        cout<<"Exception Occured : "<<e<<endl;
    }
    
    return 0;
}