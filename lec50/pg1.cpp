//create 2d array in heap memory
#include <iostream>
using namespace std;

int main()
{
    //create an array that stores address of other arrays
    int n,m;
    cin>>n>>m;
    int **ptr=new int *[n];
    //create 2d array
    for(int i=0;i<n;i++)
    ptr[i]=new int[m];

    //value daldo us 2d array mein

    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    cin>>ptr[i][j];

    //value print karwado 2d array ke

    for(int i=0;i<n;i++)
    {
    for(int j=0;j<m;j++)
    cout<<ptr[i][j]<<" ";
    cout<<endl;
    }

    //memory release kardo

    for(int i=0;i<n;i++)
    delete[] ptr[i];


    delete[] ptr;
    return 0;
}