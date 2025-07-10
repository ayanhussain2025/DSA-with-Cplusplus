//10-04-2025 : perfect sum problem : , optimixe aproach in dynamic programming
#include<iostream>
using namespace std;

int perfectsum(int arr[],int index, int n , int sum)
{
    //base condition
    if(index==n)
    return sum==0;
    return perfectsum(arr,index+1,n,sum) + perfectsum(arr,index+1,n,sum-=arr[index]);
}

int main()
{
    int arr[]={1,0};
    cout<<perfectsum(arr,0,2,1);
}