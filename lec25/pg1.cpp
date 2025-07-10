//Book Allocation
#include<iostream>
using namespace std;
int main(){
    int arr[4]={12,34,67,90};
    int m=2,n=4,start=0,end=0,mid,ans; //m is  the no of student that we need to distribute book and n is no of books
    for(int i=0;i<n;i++){
    start=max(start,arr[i]);
    end+=arr[i];
    }
    if(m>n)
    {
        cout<<"book allocation is not possible";
        return 0;
    }
    while(start<=end)
    {
        mid=start+(end-start)/2;
        int page=0,count=1;
        for(int i=0;i<n;i++)
        {
            page+=arr[i];
            if(page>mid)
            {
                count++;
                page=arr[i];
            }
        }
        if(count<=m)
        {
            ans=mid;
            end=mid-1;
        }
        else start=mid+1;        
    }
    cout<<ans;

}