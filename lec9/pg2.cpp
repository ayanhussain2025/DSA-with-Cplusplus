#include <iostream>
using namespace std;

int main()
{
    int row,col,n;
    cout<<"enter the number : ";
    cin>>n;
    for(row=1;row<=n;row=row+1)
    {   
        //space print
        for(col=1;col<=n-row;col=col+1)
        {
            cout<<"  ";
        }
        // number print in increasing order 
        for(col=1;col<=row;col=col+1)
        {
            cout<<col<<" ";
        }
        //number print in decreasing order 
        for(col=row-1;col>=1;col=col-1)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    return 0;
}