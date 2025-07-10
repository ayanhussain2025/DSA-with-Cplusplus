//Constructor Overloading : multiple constructor of same name but different parameter.
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

    //parameterized constructor
    Customer(string a,int b,int c)
    {
        name=a;
        account_number=b;
        balance=c;
    }

    Customer(string a, int b)
    {
        name=a;
        account_number=b;
    }
    void display()
    {
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }
};

int main()
{
    Customer A1,A2("saif",32,3000);
    Customer A3("rehan",56);
    A1.display();
    A2.display(); 
    A3.display(); //at place of balance it will return garbage value; 
}