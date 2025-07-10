//factorial of n 
#include <iostream>
using namespace std;
int fact(int n)
{
    if(n==0) //you can also do if(n==0 || n==1) : return 1;
    return 1;

    return n*fact(n-1);
}

int main()
{
    int n=10;
    if(n<0)
    {
        cout<<"enter whole number only..";
        return 0;
    }
    cout<<fact(n);  
    return 0;
}

//conver this code in string for removing stack overflow problem