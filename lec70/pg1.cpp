//string student information without using classes , by just using functional and logic programming
#include<iostream>
using namespace std;
void fun()
{
    string name;
    int age;
    int roll_number;
    string grade;

    cin>>name>>age>>roll_number>>grade;
}

void fun2()
{
    //student 2
    string name2;
    int age2;
    int roll_number2;
    string grade2;

    cin>>name2>>age2>>roll_number2>>grade2;
}

int main()
{
    //student 1
    string name;
    int age;
    int roll_number;
    string grade;

    cin>>name>>age>>roll_number>>grade;

    //student 2
    string name2;
    int age2;
    int roll_number2;
    string grade2;

    cin>>name2>>age2>>roll_number2>>grade2; //you can also do this in an array

    fun();
    fun2();
    return 0;
}
//in functional prgramming we have to create variable for different student again again
//or
// here we're writing same code again agian can we not just write once and use it multiple time for that we use class and object , see pg2