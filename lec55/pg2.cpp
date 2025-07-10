//print all elments of an array using recursion method-1
#include<iostream>
using namespace std;
void pr(int arr[],int size , int index)
{
    if(index==size)
    return;
    cout<<arr[index]<<" ";
    pr(arr,size,index+1);
}

int main()
{
    int arr[5]={2,6,4,8,9};
    pr(arr,5,0);
}