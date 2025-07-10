//basic of pointer like how to create it ,etc.
#include <iostream>
using namespace std;

int main()
{
    int a=10;
    int *ptr=&a;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    float m=3.05;
    float *ptr1=&m;
    cout<<ptr1<<endl;
    return 0;
}