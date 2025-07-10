#include <iostream>
using namespace std;
void Swap(int &a,int &b) //pass by refrence
{
    int c;
    c=a;
    a=b;
    b=c; 
}
void Swap(float &c , float &d)
{
    float r;
    r=c;
    c=d;
    d=r;
}

int main()
{
    int a,b;
    cout<<"enter the two number : ";
    cin>>a>>b;
    Swap(a,b);
    cout<<a<<" "<<b<<endl;
    float c=3.5,d=4.5;
    Swap(c,d);
    cout<<c<<" "<<d;
}