// how to create 2d array using pointer
#include <iostream>
using namespace std;

int main()
{
    int L,B,H;
    cin>>L>>B>>H;

    int ***ptr = new int **[L];

    //create 2d array and store its address int ptr

    for(int i=0;i<L;i++)
    {
        ptr[i]=new int *[B];
        for(int j=0;j<B;j++)
        {
            ptr[i][j]=new int [H];
        }
    }

    //value dallo

    for(int i=0;i<L;i++)
    for(int j=0;j<B;j++)
    for(int k=0;k<H;k++)
    ptr[i][j][k]=i+j+k;

    //value print karado
    for(int i=0;i<L;i++)
    for(int j=0;j<B;j++)
    for(int k=0;k<H;k++)
    cout<<ptr[i][j][k]<<" ";

    //memory release karne ke program khud karna h


    return 0;
}