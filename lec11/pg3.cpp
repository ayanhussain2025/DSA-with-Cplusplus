#include <iostream>
using namespace std;

int main()
{   
    //break
    int i=1;
    while(i<=10)
    {
        if(i==4)
        break; 
        cout<<i<<" ";
        i++;
    }
    return 0;
}