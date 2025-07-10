//this is my approach
#include<iostream>
#include<vector>
using namespace std;
int ways1(vector<int>&arr,int size,int sum)
{
    //base condition
    if(sum==0)
    return 1;
    if(sum<0)
    return 0;
    int nways=0;
    for(int i=0;i<size;i++)
    nways+=ways1(arr,size,sum-arr[i]);
    return nways;
}
int main()
{
    vector<int>arr={1,5,6};
    int sum=7;
    cout<<ways1(arr,3,sum);
    return 0;
}