#include<iostream>
using namespace std;
int main()
{
    char row,col;
    for(row='a';row<='e';row=row+1)
    {
        for(col='a';col<=row;col=col+1)
        {
            cout<<row<<" ";
            
        }
        cout<<endl;
    }
}