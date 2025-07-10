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
    //parameterized constructor
    Customer(string a,int b,int c)
    {
        name=a;
        account_number=b;
        balance=c;
    }

    //lets see how copy look
    Customer(Customer &B) //B is A1 is pointing same thing
    {
        name=B.name;
        account_number=B.account_number;
        balance=B.balance;
    }
    void display()
    {
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }
};

int main()
{
    Customer A1("saif",32,3000);
    Customer A2(A1);//using copy constructor that made by ourself
    //one more way to copy 1 object to another is by using assignment operator
    Customer A3=A2;
    A1.display();
    A2.display(); 
    A3.display();

}