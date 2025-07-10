#include <iostream>
#include <math.h>
using namespace std;
int countdigit(int num)
{
   int count=0;
   while(num)
   {   
       count++;
       num/=10;
   }
   return count;
}

bool Armstrong(int num,int digit)
{
    int n=num,rem,ans=0;
    while(n)
    {
        rem=n%10;
        n/=10;
        ans=ans+pow(rem,digit);
    }
    if(ans==num)
    return 1;
    else return 0;
    }
int main()
{
    int num;
    cout<<"enter the  number : ";
    cin>>num;
    int digit=countdigit(num);
    cout<<Armstrong(num,digit);
}