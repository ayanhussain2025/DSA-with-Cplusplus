#include <iostream>
#include<limits.h>
using namespace std;


int main()
{
    int arr[5]={4,5,2,8,3};
    int ans=INT_MAX;
    for(int i=0;i<5;i++)
    {
        if(arr[i]<ans)
        ans=arr[i];
    }
    cout<<ans;
    return 0;
}