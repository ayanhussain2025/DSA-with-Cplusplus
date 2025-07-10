#include<iostream>
using namespace std;

int main()
{
     int last=0,prev=1,current,i;
     int n=5;
        if(n==0)
        return 0;
        else if(n==1)
        return 1;
        else
        {
            for(int i=2;i<=n;i++)
            {
               current=prev + last;
               last=prev;
               prev=current;
            }
        }
        return current;
}