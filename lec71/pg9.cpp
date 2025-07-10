//Constructor and Destructor order
#include<iostream>
using namespace std;

class Customer
{
    string name;

    public:
    Customer()
    {
        name="4";
        cout<<"Constructor is :"<<name<<endl;
    }

    Customer(string name)
    {
        this->name=name;
        cout<<"Constructor is :"<<name<<endl; //constructor called INORDER
    }

    ~Customer()
    {
        cout<<"destructor is called :"<<name<<endl;  //REVERSE ORDER
    }
};

int main()
{
    Customer A1("1"),A2("2"),A3("3");
    Customer *A4 = new Customer;
    //for calling destructor of A4 , we have to do
    delete A4; //after this destructor for A4 is called
}