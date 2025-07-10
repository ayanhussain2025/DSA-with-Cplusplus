#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter The Number : ";
    cin>>n;
    int arr[1000];
    //first element = 0;
    arr[0]=0;
    //second element =1;
    arr[1]=1;
    for(int i=2;i<=n-1;i++) //why n-1 bcz indexing start from 0 so n will be n-1
    arr[i]=arr[i-1]+arr[i-2];
    cout<<"fibonacci series in an array till n is  : "<<arr[n-1];

}