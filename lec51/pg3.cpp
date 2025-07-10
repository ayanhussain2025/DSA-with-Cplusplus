//with help of function
#include<iostream>
using namespace std;

void fun0()
{
    cout<<"happy birthday to you"<<endl;
}

void fun1(int n)
{
    cout<<n<<" days in remaining in your birthday"<<endl;
    fun0();
}

void fun2(int n)
{
    cout<<n<<" days in remaining in your birthday"<<endl;
    fun1(n-1);
}

void fun3(int n)
{
    cout<<n<<" days in remaining in your birthday"<<endl;
    fun2(n-1);
}

int main()
{
    //by using just one function
    fun3(3);
}