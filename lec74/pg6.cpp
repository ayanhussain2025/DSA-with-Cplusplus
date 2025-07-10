//Heirarchial Inheritance
#include<iostream>
using namespace std;

class Human
{
    protected:
    string name;
    int age;

    public:

    Human() //default contructor is needed for teacher object
    {

    };
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
    A1.display();
    teacher A2(25000,"raju",43);
    return 0;
}
