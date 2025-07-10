#include <iostream>
using namespace std;
int factzero(int num)
{
    if(num==0)
    {
       return 1;
    }
    else
    {
    int fact = 1,ans = 1;
    for(int i =1;i<=num;i++)
    {
        fact = fact * i;
    }
    int rem,count = 0;
    while(fact)
    {
        rem=fact%10;
        if(rem==0)
        {
          count++;   
        }
        fact/=10;

    }
    return count;
    }

}
int main()
{
    int num;
    cout<<"enter the number :";
    cin>>num;
    cout<<factzero(num);
}