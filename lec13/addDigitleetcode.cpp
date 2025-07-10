//add to digit(leet code)
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter the number : ";
    cin>>num;
    while(num>9)
    {
        int ans=0,rem;
      while(num!=0)
    {
        rem=num%10;
        num/=10;
        ans+=rem;
    }  
        num=ans;
    }
    cout<<num;
}