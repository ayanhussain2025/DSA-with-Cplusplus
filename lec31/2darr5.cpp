//print sum of diagonal element
#include <iostream>
using namespace std;
void diagonalsum(int arr[][4],int row,int col)
{
    //first diagonal sum
    int i=0,fd=0;
    while(i<row)
    {
        fd+=arr[i][i];
        i++;
    }  
    //second diagonal sum
    i=0;
    int sd=0,j=col-1;
    while(j>=0)
    {
        sd+=arr[i][j];
        i++;
        j--;
    }
    //calculatind sum of both diagonal
    cout<<"sum of both diagonal is : "<<fd+sd;
}

int main()
{
    int matrix[4][4]={5,8,3,9,6,2,8,4,5,3,2,2,2,8,1,9};
    diagonalsum(matrix,4,4);

}