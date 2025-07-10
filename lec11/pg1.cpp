#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number : ";
    cin>>n;
    int i=1; //initialize
    while(i<=10) //break
    {
        cout<<n*i<<endl;
        i++;  //update
    }

    return 0;
}