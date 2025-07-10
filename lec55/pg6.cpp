//sum of elments in an array using recursion , method-1
#include <iostream>
using namespace std;
int sm(int arr[],int index)
{
    if(index==0)  // you can use this also if(index==-1) : return 0;
    return arr[0];
    return min(sm(arr,index-1),arr[index]);
}
int main()
{
    int arr[5]={2,6,1,8,9};
    cout<<"smallest elements of array is : "<<sm(arr,4);
    return 0;
}