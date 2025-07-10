//my code
#include<iostream>
using namespace std;

int sum(int m,int n) //function declare
{
    int ans=m+n;  //function define
    return ans;
}
int mul(int m,int n)
{
    int ans=m*n;
    return ans;
}
void fun()
{
    cout<<"hello coder army";
}
int main()
{
    int a,b;
    cout<<"enter the first number : ";
    cin>>a;
    cout<<"enter the second number  :";
    cin>>b;
    //function call
    cout<<sum(a,b)<<endl;
    cout<<mul(a,b)<<endl;
    fun();
}
