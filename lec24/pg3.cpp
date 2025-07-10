// solved it after just seeing the question 
#include<iostream>
using namespace std;
int main(){
    int arr[6]={4,5,6,0,1,2};
    int start=0,n=6,end=n-1,mid,key=0,ans=-1;
    while(start<=end){
        mid=start+(end-start)/2;
        //left sotted
        if(arr[mid]==key){
        ans=mid;
        break;
        }
        else if(arr[mid]>=arr[0])
        {
            if(arr[start]<=key&&key<=arr[mid])
            end=mid-1;
            else
            start=mid+1;
        }
        else
        {
            if(arr[mid]<=key&&key<=arr[end])
            start=mid+1;
            else
            end=mid-1;
        }
    }
    cout<<ans;
}