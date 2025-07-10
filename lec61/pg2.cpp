//Subsequence optimazed in terms of space o(2^n)
#include<iostream>
#include<vector>
using namespace std;
void subseq(int arr[],int index,int n,vector<vector<int>>&ans,vector<int>&temp)
{
    //basecase
    if(index==n)
    {
        ans.push_back(temp);
        return;
    }
    //NO
    subseq(arr,index+1,n,ans,temp);
    //YES
    temp.push_back(arr[index]);
    subseq(arr,index+1,n,ans,temp);
    temp.pop_back();

}

int main()
{
    int arr[]={1,2,3};
    vector<vector<int>>ans;
    vector<int>temp;
    //function call
    subseq(arr,0,3,ans,temp);

    //now print value present in ans or print power of set of arr
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}