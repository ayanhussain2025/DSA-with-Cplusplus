//my optimal method of pg1
#include <iostream>
using namespace std;

int main()
{
    int arr[7]={4,3,6,1,2,2,6};
    int n=7; //size of an array
    //minus 1 in each element
    for(int i=0;i<n;i++)
    arr[i]--;
    //storing no of times repeating with the values(2 value in 1 box)
    for(int i=0;i<n;i++)
    {
        arr[arr[i]%n]+=n;
    }
    //repeating
    for(int i=0;i<n;i++)
    {
        if(arr[i]/n==2)
        {
            cout<<i+1;
            break;
        }
    }
    //missing no
    for(int i=0;i<n;i++)
    {
        if(arr[i]/n==0)
        {
            cout<<i+1 <<" ";
            break;
        }
    }

    return 0;
}