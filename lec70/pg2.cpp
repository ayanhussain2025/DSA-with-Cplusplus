#include<iostream>
using namespace std;

class student
{
    public : // private || protected ==> Acess Specifier //be default it is private make this public do that we can access it
    string name;
    int age;
    int roll_number;
    string grade;
};
int main()
{
    //object for student 1
    student s1;
    s1.name="Ayan Hussain";
    s1.age=22;
    s1.roll_number=12;
    s1.grade="A+";
    cout<<s1.name<<endl;
    cout<<s1.age<<endl;
    cout<<s1.roll_number<<endl;
    cout<<s1.grade<<endl;

    //object for student 2

    student s2;
    s2.name="Rehan Hussain";
    s2.age=15;
    s2.roll_number=34;
    s2.grade="A+";
    cout<<s2.name<<endl;
    cout<<s2.age<<endl;
    cout<<s2.roll_number<<endl;
    cout<<s2.grade<<endl;

    cout<<s1.name<<endl;
    cout<<s1.age<<endl;
    cout<<s1.roll_number<<endl;
    cout<<s1.grade<<endl;

    return 0;
}