//my way to solve
// #include <iostream>
// using namespace std;

// int main()
// {
//     int row,col,n;
//     cout<<"enter the input : ";
//     cin>>n;
//     for(row=1;row<=n;row=row+1)
//     {
//         for(col=1;col<=n-row+1;col=col+1)
//         cout<<"*"<<" ";
//         for(col=1;col<=2*(row-1);col=col+1)
//         cout<<"  ";
//         for(col=1;col<=n-row+1;col=col+1)
//         cout<<"*"<<" ";
//         cout<<endl;
//     }
//     for(row=1;row<=n;row=row+1)
//     {
//         for(col=1;col<=row;col=col+1)
//         cout<<"*"<<" ";
//         for(col=1;col<=2*(n-row);col=col+1)
//         cout<<"  ";
//         for(col=1;col<=row;col=col+1)
//         cout<<"*"<<" ";
//         cout<<endl;
//     }
// }
//bahiya ka tarika
#include <iostream>
using namespace std;

int main()
{
    int row,col,n;
    cout<<"enter the input : ";
    cin>>n;
    for(row=n;row>=1;row=row-1)
    {
        //print *
        for(col=1;col<=row;col=col+1)
        cout<<"*"<<" ";
        for(col=1;col<=2*n-2*row;col=col+1)
        cout<<"  ";
        for(col=1;col<=row;col=col+1)
        cout<<"*"<<" ";
        cout<<endl;
    }
for(row=1;row<=n;row=row+1)
    {
        //print *
        for(col=1;col<=row;col=col+1)
        cout<<"*"<<" ";
        for(col=1;col<=2*n-2*row;col=col+1)
        cout<<"  ";
        for(col=1;col<=row;col=col+1)
        cout<<"*"<<" ";
        cout<<endl;
    }

}
