//bubble sort done by just watching 6 min 22 seconds of video
#include<iostream>
using namespace std;

int main(){
    int arr[5]={7,4,8,5,3};
    for(int i=4;i>0;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
}