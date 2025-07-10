//print 1 to N no. method-2
#include <iostream>
using namespace std;

void printeven(int N)
{
    if(N==2)
    {
        cout<<2<<endl;
        return;
    }

    printeven(N-2);
    cout<<N<<endl;
}

int main()
{
    int N;
    cin>>N;
    if(N%2==1)
    N--;
    printeven(N);
    return 0;
}