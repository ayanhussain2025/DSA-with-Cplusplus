//how to use heap memory;
#include <iostream>
using namespace std;

int main()
{
    //variabkle ke liye heap memory allocate karo
    int *ptr=new int; //memory allocation happen dynamically where where you see new keyword
    *ptr = 5; //value assign
    cout<<*ptr<<endl;//this will give value present in heap memory
    cout<<ptr<<endl; // this will give address of heap memory where our data is stored

    float *ptr2 = new float; //for float
    *ptr2=3.8; 
    cout<<*ptr2<<endl;
    cout<<ptr2<<endl;

    //for array
    int n;
    cout<<"enter the size of the array : "<<endl;
    cin>>n;
    int *p = new int[n];

    //value daaloo

    for(int i=0;i<n;i++)
    p[i]=i+1;

    //print the value 

    for(int i=0;i<n;i++)
    cout<<p[i]<<" ";

    //how to use delete keyword to release the memory allocation in heap
    //deleting memory is a good habbit

    delete ptr;
    delete ptr2;
    delete[] p;

    cout<<"\nyour all memory from heap is deleted";
    return 0;
}