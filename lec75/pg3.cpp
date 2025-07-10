#include<iostream>
using namespace std;
 
class Animal
{
    public :
    virtual void sound()  // agr yha pe ham virtual function na likhe to ye wala function call hoga aur ye compile time me hi decide hojayega
    {
        cout<<"hu hu\n";
    }
};

class Dog : public Animal
{
    public :
    void sound()  //agr ham virtual likh de animal wale sound method me to yeh dog wala speak function call hoga aur ye decide hoga runtime mein
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