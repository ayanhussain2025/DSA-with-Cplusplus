#include <iostream>
using namespace std;

int main()
{   
    int n=6;
    int arr[1000]={2,7,4,11,5,8};
    int temp=arr[n-1];
    for(int i=n-2;i>=0;i--)
    arr[i+1]=arr[i];
    arr[0]=temp;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

}