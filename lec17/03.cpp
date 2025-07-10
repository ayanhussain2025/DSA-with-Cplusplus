#include <iostream>
#include<limits.h>
using namespace std;

int main()
{
    // second largest
    int arr[6]={12,35,1,10,34,1};
    int first_largest=INT_MIN;
    for(int i=0;i<6;i++)
    {
        if(arr[i]>first_largest)
        first_largest=arr[i];
    }
    int second_largest=-1;
    for(int i=0;i<6;i++)
    {
        if(arr[i]!=first_largest)
        second_largest=max(second_largest,arr[i]);
    }
    cout<<second_largest;

}