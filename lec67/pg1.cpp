//tower of hanoi - ek baar sry run karke dekhna 
#include<iostream>
using namespace std;
void toh(int n,int src,int help,int dstn)
{
    if(n==1)
    {
        cout<<"Move disk"<<n<<"from"<<src<<"to"<<dstn<<endl;
        return;
    }
    toh(n-1,src,dstn,help);
    cout<<"Move disk"<<n<<"from"<<src<<"to"<<dstn<<endl;
    toh(n-1,help,src,dstn);
}

int main()
{
    int n=3,src=1,help=2,dstn=3;
    toh(n,src,help,dstn);
    return 0;
}
