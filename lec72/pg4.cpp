//Encapsulation
#include<iostream>
using namespace std;
class Customer
{
    string name;
    int account_Number,balance,age;
    public:
    Customer(string name,int account_Number,int balance,int age)
    {
        this->name=name;
        this->account_Number=account_Number;
        this->balance=balance;
        this->age=age;
    }    
    void deposit(int amount)
    {
        if(amount<=balance && amount > 0)
        {
            balance+=amount;
        }
    }

    void withdrawl(int amount)
    {
        if(amount<=balance && amount<0)
        {
            balance-=amount;
        }
    }

    void updateage(int age)
    {
        if(age>=18&&age<=100)
        {
            this->age=age;
        }
    }

    void display()
    {
        cout<<name<<" "<<account_Number<<" "<<balance<<" "<<age<<endl;
    }
};

int main()
{
    Customer A1("Ayan",1,500,19);
    Customer A2("Rehan",2,1100,21);
    

    return 0;
}