// target sum , my method
#include<iostream>
#include<vector>
using namespace std;

void targetsum(int arr[],int index,int n,int sum,int target,bool &ans)
{
    //basecase
    if(index==n)
    {
        if(sum==target)
        ans=true;
        return;
    }
    //not include
    targetsum(arr,index+1,n,sum,target,ans);
    //include
    targetsum(arr,index+1,n,sum+=arr[index],target,ans);
}
int main()
{
    //
    int arr[]={3,6,4,5};
    int sum=0;
    bool ans=false;
    targetsum(arr,0,4,sum,12,ans);
    cout<<ans;
}