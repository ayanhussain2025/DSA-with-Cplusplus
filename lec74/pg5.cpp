//Heirarchial Inheritance
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

class teacher : public Human
{
    int salary;
    public:
    teacher(int salary,string name,int age)
    {
        this->salary=salary;
        this->name=name;
        this->age=age;
    }
};
int main()
{
    student A1("Ayan",21,13,130000);
    A1.work();
    teacher A2(25000,"raju",43); //In this case no defualt contructor is needed
    return 0;
}
