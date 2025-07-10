#include <iostream>
using namespace std;

int main()
{    
    // scope variable example 1
    int n=10;
    int i = 30;
    cout<<n<<endl;

    // int n=20; // you can not create another variable of same name here
    // cout<<n;
    if(i==30)
    {
        int n=20;
        cout<<n;
        // int n = 50 ; //// not possible
    }

    return 0;
}