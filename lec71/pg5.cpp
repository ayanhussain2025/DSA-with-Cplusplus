//Default copy constructor
#include<iostream>
using namespace std;

class Customer
{
    string name;
    int account_number;
    int balance;

    //default constructor
    public:
    //parameterized constructor
    Customer(string a,int b,int c)
    {
        name=a;
        account_number=b;
        balance=c;
    }
    void display()
    {
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }
};

int main()
{
    Customer A1("saif",32,3000);
    Customer A2(A1); //using default copy constructor
    A1.display();
    A2.display(); 

}