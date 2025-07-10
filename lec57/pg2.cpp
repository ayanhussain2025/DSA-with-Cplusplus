//binary search using recursion
#include<iostream>
using namespace std;
bool binarysearch(int arr[],int start,int end,int x)
{
    //base case
    if(start>end)
    return 0;
    int mid=start+(end-start)/2;
    if(arr[mid]==x)
    return 1;
    else if(arr[mid]>x)
    return binarysearch(arr,start,mid-1,x);
    else return binarysearch(arr,mid+1,end,x);

}

int main()
{
    int arr[7]={2,4,7,3,11,8,12};
    cout<<binarysearch(arr,0,7,8);   
}