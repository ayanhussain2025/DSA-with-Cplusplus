//basic of pointer like how to create it ,etc.
#include <iostream>
using namespace std;

int main()
{
    int a=10;
    int *ptr=&a;
    cout<<ptr<<endl; //this will print address of a
    cout<<*ptr<<endl; //this will print value of b
    int b=20;
    ptr=&b;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    b=30;
    cout<<*ptr<<endl;
    return 0;
}