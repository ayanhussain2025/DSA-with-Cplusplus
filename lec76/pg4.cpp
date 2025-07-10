#include<iostream>
using namespace std;

int main()
{
    try
    {
        int *p = new int[100000000];  // reasonable, ~400 MB
        cout<<"memory allocated successfully\n";
        delete []p;
    }
    catch(const exception &e)
    {
        cout<<"Exception Occured due to line 8"<<e.what()<<endl;
    }
    
    return 0;
}