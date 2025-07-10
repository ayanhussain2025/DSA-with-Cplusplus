#include<iostream>
using namespace std;
int main()
{
//1st case
    int arr[5]={1,2,3,4,5}; //array declare
    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
//2nd case
    int arr1[]={1,2,3,4,5,6};
    for(int i = 0;i<6;i++)
    cout<<arr1[i]<<" ";
    cout<<endl;
    //3rd case
    int arr2[6]={1,2,3};
    for(int i = 0;i<6;i++)
    cout<<arr2[i]<<" ";
    cout<<endl;

    //4th case
    int arr3[]={0};
    for(int i = 0;i<6;i++)
    cout<<arr3[i]<<" ";
    cout<<endl;

    //taking input from the user and printing it 

    int arr4[6];
    for(int i =0;i<6;i++)
    cin>>arr4[i];

    for(int i =0;i<6;i++)
    cout<<arr4[i]<<" ";

}