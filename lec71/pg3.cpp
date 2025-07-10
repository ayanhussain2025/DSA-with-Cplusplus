//This pointer
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
    Customer(string name,int account_number,int balance) //to handle this : name=name we do this->name = name;
    {
        this->name=name;
        this->account_number=account_number;
        this->balance=balance;
    }

    Customer(string name, int account_number)
    {
        this->name=name; //this pointer : jis object ne isse call kiya hai wo uske address ko store karke rekhta hia kaun this pointer.
        this->account_number=account_number;
        this->balance=50;
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