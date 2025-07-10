// my method
#include <iostream>
using namespace std;

int main()
{
   int row,col,n;
   cout<<"enter the input : ";
   cin>>n;
   for(row=1;row<=n;row=row+1)
   {
    for(col=1;col<=row-1;col=col+1)
    cout<<"  ";
    for(col=2*n-1;col>=2*row-1;col=col-1)
    cout<<"*"<<" ";
    cout<<endl;
   } 
}

//rohit negi bahiya method

// #include <iostream>
// using namespace std;

// int main()
// {
//    int row,col,n;
//    cout<<"enter the input : ";
//    cin>>n;
//    for(row=n;row>=1;row=row-1)
//    {
//       // space 
//     for(col=1;col<=n-row;col=col+1)
//     cout<<"  ";
//     //star print
//     for(col=1;col<=2*row-1;col=col+1)
//     cout<<"*"<<" ";
//     cout<<endl;
//    } 
// } 
