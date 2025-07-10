#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[],int start,int mid,int end)
{
    int left=start,right=mid+1;
    vector<int>temp(end-start+1);
    int index=0;

    //compare and merge two splited array
    while(left<=mid&&right<=end)
    {
        if(arr[left]<=arr[right])
        {
            temp[index]=arr[left];
            left++;
        }
        else
        {
            temp[index]=arr[right];
            right++;
        } 
       index++;
    }
    //if element left in left array
    while(left<=mid)
    {
        temp[index]=arr[left];
        left++;
        index++;
    }
    //if element left in right array
    while(right<=end)
    {
        temp[index]=arr[right];
        right++;
        index++;
    }

    //put the sorted array data into original array
    index = 0;
    while(start<=end)
    {
        arr[start]=temp[index];
        start++,index++;
    }
}
void mergesort(int arr[],int start,int end)
{
    //base case
    if(start==end)
    return;
    
    int mid=start+(end-start)/2;
    //left half
    mergesort(arr,start,mid);
    //right half
    mergesort(arr,mid+1,end);
    //sort them while merging, after diving the array
    merge(arr,start,mid,end);
}

int main()
{
    int arr[10]={6,3,1,2,8,9,10,7,3,10};
    mergesort(arr,0,9);
    for(int i=0;i<10;i++)
    cout<<arr[i]<<" ";
}