//default constructor
#include<iostream>
using namespace std;

class Customer
{
    string name;
    int account_number;
    int balance;

    //default constructor
    public:
    Customer()
    {
        cout<<"Default customer is called\n";
        name="ayan";
        account_number=12;
        balance=100;
    }
    void display()
    {
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }
};

int main()
{
    Customer A1,A2,A3;
    A1.display();
    A2.display();
    A3.display();   
}