//Multipath Inheritance
#include<iostream>
using namespace std;
class Human
{
    public:
    string name;

    void display()
    {
        cout<<"My name is "<<name<<endl;
    }
};
class Engineer : public virtual Human //solution for ambiguity
{
    public:
    string specialization;
    void work()
    {
        cout<<"I have a specialization in "<<specialization<<endl;
    }
};

class youtuber : public virtual Human
{
    public :
    int subcriber;

    void contentcreater()
    {
        cout<<"I have a subcriber base of "<<subcriber<<endl;
    }

};

class CodeTeacher : public Engineer, public youtuber 
{ 
    public:
    string salary;
    CodeTeacher(string name,string specialization,int subcriber,int salary)
    {
        this->name=name; //giving error by the compiler , puchraha hai ye name hai kaunsa wala name : solution -<put virtua public virtual Human
        this->specialization=specialization;
        this->subcriber=subcriber;
        this->salary=salary;
    }

    void showcase()
    {
        cout<<"My name is "<<name<<endl;
        work();
        contentcreater();
    }
};

int main()
{
    CodeTeacher A1("Rohit","Computer Science",500,12500);
    A1.display();
    return 0;
}