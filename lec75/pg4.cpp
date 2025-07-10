#include<iostream>
using namespace std;
 
class Animal
{
    public :
    virtual void sound()=0; //this is know as pure virtual function also known as abstract class and you cannot make object of this animal class bcz it is an abstact class and speak wal niche harjgah override hona cahiye
};

class Dog : public Animal
{
    public :
    void sound()  
    {
        cout<<"Barks\n";
    }

    void walk()
    {
        cout<<"dog walk on a four legs\n";
    }
};

int main()
{
    Animal *p; //p ek pointer hai jo point karha hai animal type ke value ko
    p = new Dog(); // p store karha hai address of class dog
    p->sound(); //p call karha sound function ko

    // p->walk(); // this will give an error because walk function is  not present is animal class
}