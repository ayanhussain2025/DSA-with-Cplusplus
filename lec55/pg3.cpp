//print all elments of an array using recursion method-2
#include<iostream>
using namespace std;
void pr(int arr[],int index)
{
    if(index==-1)
    return;

    pr(arr,index-1);
    cout<<arr[index]<<" ";
}

int main()
{
    int arr[5]={2,6,4,8,9};
    pr(arr,5-1);
}