//Multiple Inheritance
#include<iostream>
using namespace std;

class Engineer
{
    public:
    string specialization;
    public:
    void work()
    {
        cout<<"I have a specialization in "<<specialization<<endl;
    }
};

class youtuber
{
    public :
    int subcriber;

    void contentcreater()
    {
        cout<<"I have a subcriber base of "<<subcriber<<endl;
    }

};

class CodeTeacher : public Engineer, public youtuber //jis bhi parent ka naam phele likha hia uska constructor phele call hoga then last me object ka contructor
{ 
    public:
    string name;


    CodeTeacher(string name,string specialization,int subcriber)
    {
        this->name=name;
        this->specialization=specialization;
        this->subcriber=subcriber;
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
    CodeTeacher A1("Rohit","Computer Science",500);
    A1.showcase();
    return 0;
}