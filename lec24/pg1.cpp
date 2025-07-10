//peak index in a moutain array
//solved after watching 5 mins of video
#include<iostream>
using namespace std;
int main(){
    int arr[7]={2,4,6,8,10,8,5};
    int n=7,start=0,end=n-1,mid,ans=-1;
    while(start<=end)
    {
        mid=end+(start-end)/2;
        if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1])
        {
            ans=mid;
            break;
        }
        else if(arr[mid]>arr[mid-1])
        start=mid+1;
        else end=mid-1;
    }
    cout<<ans;
}