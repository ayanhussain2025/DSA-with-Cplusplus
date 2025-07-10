//Agressive Problem
#include<iostream>
using namespace std;
int main()
{
    int stall[5]={1,2,4,8,9}; 
    int n=5;
    int start=1,end=stall[n-1]-stall[0],mid,k=3,ans;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        int count=1,pos=stall[0];
        for(int i=0;i<n;i++)
        {
            if(pos+mid<=stall[i])
            {
                count++;
                pos=stall[i];
            }
        
        }
        if(count>=k)
        {
            ans=mid;
            start=mid+1;
        }
        else end=mid-1;

    }
    cout<<ans;
}