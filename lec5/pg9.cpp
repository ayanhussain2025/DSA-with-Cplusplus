#include<iostream>
using namespace std;
int main()
{
    int fact=1,n,i;
    cout<<"enter the number : ";
    cin>>n;
    for(i=1;i<=n;i=i+1)
    fact=fact*i;
    cout<<"the factorial of first "<<n<<" number : "<<fact;
}