// Max of min for every window size
// Difficulty: HardAccuracy: 42.9%Submissions: 68K+Points: 8Average Time: 45m
// Given an array of integers arr[], the task is to find the maximum of the minimum values for every possible window size in the array, where the window size ranges from 1 to arr.size().

// More formally, for each window size k, determine the smallest element in all windows of size k, and then find the largest value among these minimums where 1<=k<=arr.size().

#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

int main()
{
    int arr[7] = {10, 20, 30, 50, 10, 70, 30};
    int n=7;
    vector<int>ans(7,0);
    for(int i=0;i<n;i++)
    {
        int maxi=INT_MIN;
        for(int j=0;j<n-i;j++)
        {
            int mini=INT_MAX;
            for(int k=j;k<j+i+1;k++)
            {
                mini=min(mini,arr[k]);
            }
            maxi=max(maxi,mini);
        }
        ans[i]=maxi;
    }

    for(int i=0;i<n;i++)
    cout<<ans[i]<<" ";
    return 0;
}