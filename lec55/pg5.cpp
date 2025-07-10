//sum of elments in an array using recursion , method-1
#include <iostream>
using namespace std;
int sumarr(int arr[],int index)
{
    if(index==0)  // you can use this also if(index==-1) : return 0;
    return arr[0];
    return sumarr(arr,index-1)+arr[index];
}
int main()
{
    int arr[5]={2,6,4,8,9};
    cout<<"sum of elements of array is : "<<sumarr(arr,4);
    return 0;
}