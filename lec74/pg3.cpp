// multilevel Inheritance
#include<iostream>
using namespace std;
class Person
{
    protected:
    string name;
    public: 
    void introduce()
    {
        cout<<"My name is "<<name<<endl;
    }
};

class Employee : public Person
{
    protected: 
    int salary;
    public:
    void monthly_salary()
    {
        cout<<"My Salary is "<<salary<<endl;
    }
};

class Manager : public Employee
{
    protected:
    string department;
    public:

    Manager(string name,int salary,string department)
    {
        this->name=name;
        this->salary=salary;
        this->department=department;
    }
    void work()
    {
        cout<<"I am leading the department "<<department<<endl;
    }
};

int main()
{
    Manager A1("Ayan",65000,"IT");
    A1.work();
    A1.monthly_salary();
    A1.introduce();
    return 0;
}