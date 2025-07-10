//linear search using recursion
#include<iostream>
using namespace std;
bool linear_search(int arr[],int index,int n,int key)
{
    //base case
    if(index==n)
    return 0;
    if(arr[index]==key)
    return 1;
    return linear_search(arr,index+1,n,key);
    
}
int main()
{
    int arr[7]={2,4,7,3,11,8,12};
    cout<<linear_search(arr,0,7,8);
}