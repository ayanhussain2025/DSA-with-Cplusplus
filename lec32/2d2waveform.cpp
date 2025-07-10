//waveform
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void waveform(int arr[][4],int row,int col)
{
    for(int j=0;j<row;j++)
    {   
        //printing row from up to down if col is positive
        if(j%2==0)
        {
            for(int i=0;i<4;i++)
            cout<<arr[i][j]<<" ";
        }
        //printing row down to up if row is odd
        else
        {
            for(int i=row-1;i>=0;i--)
            cout<<arr[i][j]<<" ";
        }
    }
}

int main()
{
    int matrix[4][4]={3,6,4,2,7,8,11,5,9,3,2,1,17,8,5,9};
    waveform(matrix,4,4);
    

    return 0;
}