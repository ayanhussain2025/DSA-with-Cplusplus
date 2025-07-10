//Destructor
#include<iostream>
using namespace std;

class Customer
{
    string name;
    int *balance;

    public :

    //constructor
    Customer()
    {  
        cout<<"Constructor is called\n";
        name="Ayan";
        balance=new int;
        *balance = 1020;
    }

    //Destructor : it create only once not multiple like constructor and it called at last
    ~Customer()
    {
        cout<<"Destructor is called";
        delete balance; //it will release dynamically allocated memory ==> if you not write then this is also fine;
    }

};

int main()
{
    Customer A1; //here default Constructor as well as Default Destructor get called
}