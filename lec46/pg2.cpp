#include<iostream>
using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5};
    int *ptr=arr;
    //print all the values
    for(int i=0;i<5;i++)
    {
        cout<<ptr[i]<<" ";
    }
    cout<<endl;

    //print all the address
    for(int i=0;i<5;i++)
    {
        cout<<ptr+i<<endl;
    }

    //arithmetic operation ptr++ , ptr -- , ptr=ptr+1

    for(int i=0;i<5;i++)
    {
        cout<<*ptr<<endl;
        ptr++;
    }
    
}