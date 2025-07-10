//done in 1st time without making an error just watching 10 min of videos
#include<iostream>
using namespace std;

int main(){

    int arr[5]={4,3,5,1,2};
    for(int i=0;i<4;i++){
        for(int j=i+1;j>0;j--){
            if(arr[j]<arr[j-1])
            swap(arr[j],arr[j-1]);
        }
    }

    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
}