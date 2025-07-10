// my code for prime number and factorial by using function
#include <iostream>
using namespace std;
bool prime(int x)
{
    if(x<2)
    return 0;
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        return 0;

    }
    return 1;

}
int fact(int x=3)
{
    int ans=1;
    if(x==0)
    return 1;
    else for(int i=1;i<=x;i++)
    {
        ans*=i;
    }
    return ans;
}
int main()
{
    cout<<fact();
    cout<<endl;
    int a,b;
    cout<<"enter the value of a : ";
    cin>>a;
    cout<<"enter the value of b : ";
    cin>>b;
    cout<<"a is "<<prime(a)<<endl;
    cout<<"factorial of a is "<<fact(a)<<endl;
    cout<<"b is "<<prime(b)<<endl;
    cout<<"factorial of b is "<<fact(b)<<endl;
    cout<<"b-a is "<<prime(b-a)<<endl;
    cout<<"factorial of b-a is "<<fact(b-a);
}