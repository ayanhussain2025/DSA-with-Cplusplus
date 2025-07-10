//Divide array in 2 sub array with equal sum
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool divide(vector<int>arr)
{
    int total_sum=0,prefix=0,n=arr.size(),ans;
    //sum of all the element
    for(int i=0;i<n;i++)
    total_sum+=arr[i];
    for(int i=0;i<n;i++)
    {
        //left part sum
        prefix+=arr[i];
        //right part sum
        // ans=total_sum-prefix; youcan also ignore this part
        //difference
        if(total_sum==2*prefix)
        return 1;
    }
    return 0;
}

int main(){
    int n;
    cout<<"enter the size of the vector: ";
    cin>>n;
    vector<int>v(n);
    cout<<"enter the element of the vector: ";
    for(int i=0;i<n;i++)
    cin>>v[i];
    cout<<divide(v);
}