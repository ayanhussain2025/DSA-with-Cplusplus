//static data member
#include<iostream>
using namespace std;
class Customer
{
    string name;
    int account_Number,balance;
    static int total_Customer; //this is static member part of class not object , and it is same for each object;

    public:
    Customer(string name,int account_Number,int balance)
    {
        this->name=name;
        this->account_Number=account_Number;
        this->balance=balance;
        total_Customer++;
    }

    void display()
    {
        cout<<name<<" "<<account_Number<<" "<<balance<<" "<<total_Customer<<endl;
    }

    //another way to access total_Customer;
    void display_total()
    {
        cout<<total_Customer<<endl;
    }
};
//intializing total_customer
int Customer :: total_Customer=0;

int main()
{
    Customer A1("Ayan",1,500);
    Customer A2("Rehan",2,1100);
    A1.display();
    A2.display();
    A1.display_total();
    Customer A3("Shivam",3,1500);
    A3.display();
    A1.display();
    A2.display();
    A2.display_total();


    return 0;
}