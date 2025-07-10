// #include <iostream>
// using namespace std;  //i make this logic

// int main()
// {   
//     int row,col;
//     for(row=1;row<=21;row=row+5)
//     {
//         for(col=row;col<row+5;col=col+1)
//         {
//             cout<<col<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int row,col,count=1;
    for(row=1;row<=5;row=row+1)
    {
        for(col=1;col<=5;col=col+1)
        {
            cout<<count<<" ";
            count=count+1;
        }
        cout<<endl;
    }
    return 0;
}