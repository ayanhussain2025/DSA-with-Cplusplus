#include<iostream>
using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5};
    int *ptr=arr;
    //addition operation

    ptr=ptr+3;
    cout<<*ptr<<endl;

    //subtraction operation
    ptr=ptr-1;
    cout<<*ptr;
}   