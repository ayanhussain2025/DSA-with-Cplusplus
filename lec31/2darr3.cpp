//sum of matrices
#include <iostream>
using namespace std;

int main()
{
    int arr1[3][4]={2,3,5,6,7,5,40,5,45,43,55,45};
    int arr2[3][4]={32,43,2,45,65,32,23,23,55,54,32,12};
    int sum[3][4];
    for(int row=0;row<3;row++)
    for(int col=0;col<4;col++)
    sum[row][col]=arr1[row][col]+arr2[row][col];
    for(int row=0;row<3;row++)
    for(int col=0;col<4;col++)
    cout<<sum[row][col]<<" ";
    
    return 0;
}