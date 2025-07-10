//sum of square of n
#include <iostream>
using namespace std;

int squaresum(int n)
{
    if(n==0)
    return 0;

    return n*n+squaresum(n-1);
}

int main()
{
    int n=0;
    if(n<0)
    {
        cout<<"enter positive number or 0 only";
        return 0;
    }
    cout<<squaresum(n);
    return 0;
}