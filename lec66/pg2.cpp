//this is my approach
#include<iostream>
#include<vector>
using namespace std;
void ways1(vector<int>&arr,int &ways,int sum)
{
    //base condition
    if(sum==0){
    ways+=1;
    return;
    }
    
    if(sum<0)
    return;

    for(int i=0;i<arr.size();i++)
    ways1(arr,ways,sum-arr[i]);
}
int main()
{
    vector<int>arr={1,5,6};
    int ways=0,sum=7;
    ways1(arr,ways,sum);
    cout<<ways;
    return 0;
}