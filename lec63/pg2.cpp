//target sum , you can repeat an element
#include<iostream>
using namespace std;

int perfectsum(int arr[],int index, int n , int sum)
{
    //base condition
    if(sum==0)
    return 1;
    if(sum<0||index ==n )
    return 0;
    return perfectsum(arr,index+1,n,sum) + perfectsum(arr,index,n,sum-=arr[index]);
}

int main()
{
    int arr[]={2,3,4};
    cout<<perfectsum(arr,0,3,6);
}