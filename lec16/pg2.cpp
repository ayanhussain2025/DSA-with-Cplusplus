#include <iostream>
using namespace std;

int main()
{
    int size;
    cin>>size;
    int arr[100]; //this is not correct method it can give you error for larger size, do like this arr[1000];
    for(int i=0;i<=size;i++)
    cin>>arr[size];
    for(int i=0;i<=size;i++)
    cout<<arr[size];

    
    return 0;
}