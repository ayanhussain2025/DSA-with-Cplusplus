#include <iostream>
using namespace std;
//Find The Missing no in an array
int main()
{
    int N=5; //original size of an array
    int arr[]={1,2,3,5}; //size=N-1
    //sum of all elements in an array
    int sumarr=0; 
    for(int i=0;i<N-1;i++)
    {
        sumarr=sumarr+arr[i];
    }
    //sum of N numbers
    int sum_of_N_no=N*(N+1)/2;
    cout<<"Missing No in an array is : "<<sum_of_N_no - sumarr;
}