#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cout<<"Enter the size of an arrray: ";
    cin>>n;
    cout<<"Enter the elements of an array: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    //insertion sort
    for(int i=1;i<n;i++){
        for(int j=i;j>0;j--){
            if(arr[j]<arr[j-1])
            swap(arr[j],arr[j-1]);
            else break;
        }
    }
    //printing sorted array
    cout<<"Sorted array is : "<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}