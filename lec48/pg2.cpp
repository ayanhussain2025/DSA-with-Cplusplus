#include <iostream>
using namespace std;

int main()
{
    int n=10;
    int *p=&n; //single pointer
    int **p2=&p; //double pointer
    int ***p3=&p2; //triple pointer
    //agr n ki value ko modify karna ho to
    *p=*p+5; //10+5==>15
    **p2=**p2+5; //15+5==>20
    ***p3=***p3+5; //20+5==>25
    cout<<n;
    //in upper program what we see that we can change the value of n with the help of every pointer;
    return 0;
}