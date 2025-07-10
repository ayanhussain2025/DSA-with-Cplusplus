#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int *ptr=arr;
    //print address of first element or 0th index in an array
    cout<<arr<<endl;
    cout<<arr+0<<endl;
    cout<<&arr[0]<<endl;
    cout<<ptr<<endl;
    //print address of second element or 1th index in an array
    cout<<arr+1<<endl;
    cout<<&arr[1]<<endl;
    cout<<ptr+1<<endl;

    //print the value of 0th index
    cout<<arr[0]<<endl;
    cout<<*arr<<endl;
    cout<<*(arr+0)<<endl;
    cout<<*ptr;

    //saare address ko print kardo

    for(int i=0;i<5;i++)
    cout<<arr+i<<endl;

    //print all the value 

    for(int i=0;i<5;i++)
    cout<<*(arr+i)<<endl;
}