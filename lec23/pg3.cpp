//solved this after watching 54 min video
#include <iostream>
using namespace std;

int main()
{
    int n=10,start=0,end=n,mid,ans;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(mid*mid==n)
        {
            ans=mid;
            break;
        }
        else if(mid*mid<n){
        start=mid+1;
        ans=mid;
        }
        else
        end=mid-1;
    }
    cout<<ans;
    return 0;
}