//subset sum - try myself (case-2), hehee this is right rohit bahiya ne apna code likhne ke baad bola ki mai sum ko main funcgtion me kese karassakta hu print 
#include<iostream>
#include<vector>
using namespace std;

void subsetsum(int arr[],int index,int n,vector<int>&temp,int sum)
{
    //base case
    if(index==n)
    {
        temp.push_back(sum); 
        return;
    }
    //no
    subsetsum(arr,index+1,n,temp,sum);
    //yes
    sum+=arr[index];
    subsetsum(arr,index+1,n,temp,sum);
}

int main()
{
    int arr[]={3,4,5};
    vector<int>temp;
    int sum=0;
    subsetsum(arr,0,3,temp,sum);
    for(int i=0;i<temp.size();i++)  //my code is doing exactly same as rohit bahiya said in case 2
    cout<<temp[i]<<endl; //this is useful because sometime we need to used the result in main fn
}