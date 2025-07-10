//Single Inheritance
#include<iostream>
using namespace std;

class Human
{
    protected:
    string name,age;

    public:
    void work()
    {
        cout<<"I am working"<<endl;
    }
};

class student : public Human
{
    int roll_number,fees;
    public:
    student(string name,int age, int roll_number,int fees)
    {
        this->name=name;
        this->age=age;
        this->roll_number=roll_number;
        this->fees=fees;
    }
};
int main()
{
    student A1("Ayan",21,13,130000);
    A1.work();
    return 0;
}

//contructor of human class going to call first and then of student class but in case of destructor it is opposite.