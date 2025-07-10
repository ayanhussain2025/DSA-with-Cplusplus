//print all elments of an array in reverse order using recursion 
#include<iostream>
using namespace std;
void pr(int arr[],int index)
{
    if(index==-1)
    return;

    cout<<arr[index]<<" ";
    pr(arr,index-1);
}

int main()
{
    int arr[5]={2,6,4,8,9};
    pr(arr,5-1);
}