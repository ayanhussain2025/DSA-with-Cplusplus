//pair sum
#include <iostream>
using namespace std;

int main()
{
    int arr[6]={1,2,4,6,18,25};
    int target=22,n=6;
    int start=0,end=n-1;
    while(start<end)
    {
        if(arr[start]+arr[end]==target)
        {
            cout<<"got it: "<<start<<" "<<end;
            break;
        }
        else if(arr[start]+arr[end]>target)
        end--;
        else start++;
    }
}