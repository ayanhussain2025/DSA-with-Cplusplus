//solved it watching 33 mins of video
#include <iostream>
using namespace std;

int main()
{
    int arr[8]={1,4,6,8,10,14,16,18};
    int target=17,index=8; //index=n if target is the biggest element
    int start=0,end=7,mid;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==target){
            index=mid;
            break;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else
        {
            end=mid-1;
            index=mid;
        }
    }
    cout<<index;
    return 0;
}