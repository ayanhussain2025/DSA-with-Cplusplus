//minimum element in an rotated array
//solved after watching 32 mins of lecs
#include<iostream>
using namespace std;
int main(){
    int arr[6]={4,6,8,10,1,2};
    int start=0,n=6,end=n-1,mid,ans=arr[0]; // ans=arr[0] sahi apprroach choose kiya hu mein
    while(start<=end){
        mid=start+(end-start)/2; //2-8//4-1
        //left sotted
        if(arr[mid]>=arr[0]) //t
        start=mid+1;
        //right sorted
        else
        {
            end=mid-1;
            ans=arr[mid];
        }
    }
    cout<<ans;

}