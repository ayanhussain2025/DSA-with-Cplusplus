//quick sort tc ==> for average case :=> tc : o(nlogn) sc : o(logn)  , worst-case ==> tc : o(n^2),same for sc
#include<iostream>
using namespace std;
int partition(int arr[],int start,int index)
{
    int pos=start;
    for(int i=start;i<=index;i++)
    {
        if(arr[i]<=arr[index])
        {
            swap(arr[i],arr[pos]);
            pos++;
        }
    }
    return pos-1;
}

void quicksort(int arr[],int start,int end)
{
    //base condition
    if(start>=end)
    return;

    int pivot=partition(arr,start,end);
    //left side
    quicksort(arr,start,pivot-1);
    //right side
    quicksort(arr,pivot+1,end);
}

int main()
{
    int arr[7]={6,2,5,1,4,2,3};
    quicksort(arr,0,6);

    for(int i=0;i<7;i++)
    cout<<arr[i]<<" ";
}