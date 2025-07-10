#include<iostream>
#include<vector>
using namespace std;

void permut(vector<int>&arr,vector<vector<int>>&ans,int index)
{
    //base condition
    if(index==arr.size())
    {
        ans.push_back(arr);
        return;
    }
    vector<bool>use(21,0);
    for(int i=index;i<arr.size();i++)
    {
        if(use[arr[i]+10]==0)
        {
            swap(arr[index],arr[i]);
            permut(arr,ans,index+1);
            swap(arr[index],arr[i]);
            use[arr[i]+10]=1;
        }
    }
}

int main()
{
    vector<int>arr={1,1,2};
    vector<vector<int>>ans;
    permut(arr,ans,0);
    for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++)
    cout<<ans[i][j]<<" ";
    cout<<endl;
    }
    return 0;
}