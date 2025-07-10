//static data member : how to access them without creating class
#include<iostream>
using namespace std;
class Customer
{
    string name;
    int account_Number,balance;
    public :
    static int total_Customer; //this is static member part of class not object , and it is same for each object;
    //we can also access total_Customer without creating object;
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
    //accessing static member without using object
    Customer :: total_Customer=5;
    A1.display();



    return 0;
}