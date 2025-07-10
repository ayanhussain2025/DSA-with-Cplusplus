//power of 2
#include <iostream>
using namespace std;

int twokapower(int n)
{
    if(n==0)
    return 1;

    return 2*twokapower(n-1);
}

int main()
{
    int n=5;
    if(n<0)
    {
        cout<<"enter positive number or 0 only";
        return 0;
    }
    cout<<twokapower(n);
    return 0;
}