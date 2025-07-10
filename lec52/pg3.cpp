//print 2 to N even no. method-1
#include <iostream>
using namespace std;

void printeven(int num,int N)
{
    if(num==N)
    {
        cout<<N;
        return;
    }

    cout<<num<<endl;
    printeven(num+2,N);
}

int main()
{
    int N;
    cin>>N;
    if(N%2==1)
    N--;
    printeven(2,N);
    return 0;
}