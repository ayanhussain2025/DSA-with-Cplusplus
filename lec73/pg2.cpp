#include<iostream>
using namespace std;

class Human
{
    string religion,color;
    protected:
    string name;
    int age , weight;
};

class student : private Human
{
    private :
    int roll_number,fees;

    public:
    student(string name,int age,int weight,int roll_number,int fees)
    {
        this->name=name;
        this->age=age;
        this->weight=weight;
        this->roll_number=roll_number;
        this->fees=fees;
    }

    void display()
    {
        cout<<"student name is "<<name<<", age is "<<age<<", weight is "<<weight<<", roll number is "<<roll_number<<", and fees is "<<fees<<"."<<endl;
    }
};
int main()
{
    student A1("Ayan",22,89,13,130000);
    A1.display();
    return 0;
}