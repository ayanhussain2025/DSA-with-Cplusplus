#include <iostream>
using namespace std;
void fun(int *p1)
{
    *p1=*p1+5;
}

void fun2(int *p1)
{
    p1++;
}

void fun3(int **p3)
{
    *p3=*p3+1;
}
int main()
{
    int num = 10;
    int *p=&num;
    int **p2=&p;
    fun(p);
    cout<<num<<endl;
    cout<<&p<<endl;
    fun2(p);
    cout<<&p<<endl; //value p is not going to change because this p and p2 of fun2 is different
    fun3(p2);
    cout<<p; //here value of p is going to change because we're using a pointer p2 that is pointing p and passing the value of p2 in void fun3 in p3
    return 0;
}