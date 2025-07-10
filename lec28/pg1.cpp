//sepration of 0 and 1
#include<iostream>
using namespace std;
int main(){
int arr[7]={1,0,0,1,0,1,1};
int n=7;
int start=0,end=n-1;
while(start<end)
{
    while(start<end)
        {
            if(arr[start]==0)
            start++;
            else if(arr[end]==0)
            {
                swap(arr[start],arr[end]);
                start++;
                end--;
            }
            else end--;
        }
}
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
}

