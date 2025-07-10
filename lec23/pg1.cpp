#include<iostream>
using namespace std;
int main(){
    int arr[6]={5,7,7,8,8,10};
    //finding first occurene by using bs
    int start=0,end=5,mid,first=-1,last=-1;
    int target=8;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==target)
        {
            first=mid;
            end=mid-1;
        }
        else if(arr[mid]<target)
        start=mid+1;
        else end=mid-1;
    }
    start=0,end=5;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==target)
        {
            last=mid;
            start=mid+1;
        }
        else if(arr[mid]<target)
        start=mid+1;
        else end=mid-1;
    }    
  
    cout<<first<<" "<<last;
}