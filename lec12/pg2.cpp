// my code
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter the number : ";
    cin>>num;
    int rem,mul=1,ans=0;
    while(num>0){
        rem=num%10; //mod by 10 to get last digit of the number
        num/=10; //
        ans+=rem*mul;
        mul*=2;
    }
    cout<<ans;
}