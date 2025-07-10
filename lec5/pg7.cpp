#include<iostream>
using namespace std;
int main()
{
    int sum,n,i;
    cout<<"enter the number : ";
    cin>>n;
    sum=0;
    for(i=1;i<=n;i=i+1)
    sum=sum+i;
    cout<<"the sum of first "<<n<<" natural number : "<<sum;
}