//Subsequence optimazed in terms of space o(2^n) for string
#include<iostream>
#include<vector>
using namespace std;
void subseq(string &arr,int index,int n,vector<string>&ans,string &temp)
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
    string arr="abc";
    vector<string>ans;
    string temp;
    //function call
    subseq(arr,0,3,ans,temp);

    //now print value present in ans or print power of set of arr
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<endl;
}