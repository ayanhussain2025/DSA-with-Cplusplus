#include <iostream>
using namespace std;

int main()
{
    int n,last=0,prev=1,current,i;
    cout<<"enter the number : ";
    cin>>n;
    if(n==1)
    {
        cout<<last;
        return 0;
    }
    else if(n==2)
    {
        cout<<prev;
        return 0;
    }
    else
    {
        for(i=3;i<=n;i=i+1)
        {
            current = prev + last;
            last = prev ;
            prev = current;
        }
    }
    cout<<current;
    return 0;
}