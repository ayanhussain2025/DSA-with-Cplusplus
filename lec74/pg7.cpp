//Hybrid Inheritance
#include<iostream>
using namespace std;
//student
//boy
//girl
//male
//female

class student
{
    public : 
    void print()
    {
        cout<<"I am student\n";
    }
};

class boy : public student , public male
{
    public:
    void boyprint()
    {
        cout<<"I am boy\n";
    }
};

class girl : public student , public female
{
    public:
    void girlprint()
    {
        cout<<"I am girl\n";
    }
};

class male
{
    public:
    void Maleprint()
    {
        cout<<"I am Male\n";
    }
};

class female
{
    public:
    void Femaleprint()
    {
        cout<<"I am Female\n";
    }
};
int main()
{
    
    return 0;
}