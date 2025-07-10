//print all elments of an array using function
#include<iostream>
using namespace std;
void pr(int arr[],int index)
{
    cout<<arr[index]<<" ";
}

int main()
{
    int arr[5]={2,6,4,8,9};
    for(int i=0;i<5;i++)
    pr(arr,i);
}