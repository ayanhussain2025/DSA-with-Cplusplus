//Single Inheritance
#include<iostream>
using namespace std;

class Human
{
    protected:
    string name;
    int age;

    public:
    Human(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
    void display()
    {
        cout<<name<<" "<<age<<endl;
    }
};

class student : public Human
{
    int roll_number,fees;
    public:
    student(string name,int age, int roll_number,int fees) : Human(name,age) //here i am calling constructor of human class
    {
        //from here,i can call human class constructor
        this->roll_number=roll_number;
        this->fees=fees;
    }

    void display()
    {
        cout<<name<<" "<<age<<" "<<roll_number<<" "<<fees<<endl;
    }
};
int main()
{
    student A1("Ayan",21,13,130000);
    A1.display(); //jis class la object apne create kara hai phele wo us class ander function find karega , isliye yaha pe student class ka function call hoga
    return 0;
}

//contructor of human class going to call first and then of student class but in case of destructor it is opposite.