//print Row Index with Max Sum
#include <iostream>
#include<limits.h>
using namespace std;
void rowmax(int arr[][4],int row,int col)
{
    int sum=INT_MIN,index=-1;
    for(int i=0;i<row;i++)
    {
        int total=0;
        for(int j=0;j<col;j++)
        {
            total+=arr[i][j];
        }
        if(sum<total)
        {
            sum=total;
            index=i;
        }
    }
    cout<<sum<<" "<<index;
}

int main()
{
    int arr[5][4]={3,4,7,18,2,28,3,9,5,4,2,2,7,3,0,8,2,8,9,1};
    rowmax(arr,5,4);
    return 0;
}