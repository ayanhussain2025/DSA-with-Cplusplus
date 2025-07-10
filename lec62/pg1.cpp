//subset sum - rohit bahiya wale code (case-1)
#include<iostream>
#include<vector>
using namespace std;

void subsetsum(int arr[],int index,int n,int sum)
{
    //base case
    if(index==n)
    {
        cout<<sum<<endl;
        return;
    }
    //no
    subsetsum(arr,index+1,n,sum);
    //yes
    subsetsum(arr,index+1,n,sum+=arr[index]);
}

int main()
{
    int arr[]={3,4,5};
    vector<int>temp;
    int sum=0;
    subsetsum(arr,0,3,sum);
}