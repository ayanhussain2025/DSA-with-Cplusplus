#include <iostream>
using namespace std;

int main()
{

    int sum=0;
    int i=1; // intialize
    do{ 
        sum=sum+i;
        cout<<sum<<endl;
        i++;  // update
    }while(i<=10); //break
    return 0;
}