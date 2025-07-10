//print 1 to N no. method-1
#include <iostream>
using namespace std;

void print(int num,int N)
{
    if(num==N)
    {
        cout<<N;
        return;
    }

    cout<<num<<endl;
    print(num+1,N);
}

int main()
{
    int N;
    cin>>N;
    print(1,N);
    return 0;
}