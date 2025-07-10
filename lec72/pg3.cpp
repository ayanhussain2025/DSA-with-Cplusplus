//static method/fuction
#include<iostream>
using namespace std;
class Customer
{
    string name;
    int account_Number,balance;
    static int total_Customer; //this is static member part of class not object , and it is same for each object;
    static int total_Balance;
    public:
    Customer(string name,int account_Number,int balance)
    {
        this->name=name;
        this->account_Number=account_Number;
        this->balance=balance;
        total_Customer++;
        total_Balance+=balance;
    }

    void deposit(int amount)
    {
        if(amount<=balance && amount > 0)
        {
            balance+=amount;
            total_Balance+=amount;
        }
    }

    void withdrawl(int amount)
    {
        if(amount<=balance && amount<0)
        {
            balance-=amount;
            total_Balance-=amount;
        }
    }

    void display()
    {
        cout<<name<<" "<<account_Number<<" "<<balance<<" "<<total_Customer<<endl;
    }

    static void display_total() //static fubction 
    {
        cout<<total_Customer<<endl;
        cout<<total_Balance<<endl;
    }
};
//intializing total_customer
int Customer :: total_Customer=0;
int Customer :: total_Balance=0;

int main()
{
    Customer A1("Ayan",1,500);
    Customer A2("Rehan",2,1100);
    Customer :: display_total();

    return 0;
}