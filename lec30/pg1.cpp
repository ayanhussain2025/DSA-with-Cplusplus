//Trapping Rain Water //my bruteforce method
//I solved this by my own , make a silly mistake that i didn't reset the value of lmax and rmax.but check my error on chatgpt 
#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int arr[8]={4,2,0,5,2,6,2,3};
    int n=8,ans=0,diff;
    for(int i=1;i<n-1;i++)
    {
        int lmax=INT_MIN,rmax=INT_MIN;
        //finding left maximum
        for(int j=0;j<i;j++)
        lmax=max(lmax,arr[j]);
        //finding right maximum
        for(int j=i+1;j<n;j++)
        rmax=max(rmax,arr[j]);
        if(arr[i]<lmax && arr[i]<rmax)
        {
            diff=min(lmax,rmax)-arr[i];
            if(diff<0)
            diff*=-1;
        }
        else diff=0;
        ans+=diff;
    }
    cout<<ans;
}