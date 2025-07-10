//Binary Search 
#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key){
    int start=0,end=n-1,index=-1,mid;
    while(start<=end){
        //mid ko find karo
        mid=(start+end)/2;
        //mid element == key
        if(arr[mid]==key)
        return mid;
        //if(arr[mid]<key)->right jao
        else if(arr[mid]<key)
        start=mid+1;
        //if(arr[mid]>key)->left joa
        else end=mid-1;
    }
    return -1;  
}
int main(){
    int arr[1000];
    int n;
    cout<<"Enter the no of elements: ";
    cin>>n; //size of an array
    cout<<"Enter the elements of an array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key";
    cin>>key;
    cout<<BinarySearch(arr,n,key);

}