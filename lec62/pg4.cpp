// target sum , my method-2 after seeing some concept of rohit negi bahiya
#include<iostream>
#include<vector>
using namespace std;

bool targetsum(int arr[],int index,int n,int target)
{
    //basecase
    // if(index==n) //this is my base case but  feel like rohit bahiya has better
    // {
    //     if(target==0)   
    //     return 1;
    //     else return 0;
    // }

    //rohit bahiya base case
    if(target==0)
    return 1;
    if(index==n || target<0)
    return 0;
    
    return targetsum(arr,index+1,n,target) || targetsum(arr,index+1,n,target-=arr[index]);
}
int main()
{
    //
    int arr[]={3,6,4,5};
    int sum=0;
    bool ans=false;
    cout<<targetsum(arr,0,4,12);
}