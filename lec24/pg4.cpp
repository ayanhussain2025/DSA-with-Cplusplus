//find kth missing number
//did it after understanding the half logic
#include<iostream>
using namespace std;

int main(){
    int arr[5]={2,3,4,7,11};
    int k=5; //this kth missing value i have to find
    int start=0,end=4,index=5;//index=size of array
    while(start<=end){
        int mid=start+(end-start)/2;
        if((arr[mid]-mid-1)==k){
            index=mid;
            end=mid-1;
        }
        else if((arr[mid]-mid-1)>=k){
            index=mid;
            end=mid-1;
        }
        else start=mid+1;
    }
    cout<<"kth missing no is : "<<index+k;  //index+k?=>just remember it or see the notes or yt
}