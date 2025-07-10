// #include <iostream>
// using namespace std;

// int main()
// {
//     for(int row=1;row<=5;row=row+1)
//     {
//         for(char col='a';col<='e';col=col+1)
//         {
//             cout<<col<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
      

     //another method
// #include <iostream>
// using namespace std;

// int main()
// {
//     int row,col;
//     for(row=1;row<=5;row=row+1)
//     {
//         for(col=1;col<=5;col=col+1)
//         {   
//             char name = 'a'+ col -1;
//             cout<<name<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    for(int row=1;row<=5;row=row+1)
    {   
        char name='a';
        for(char col=1;col<=5;col=col+1)
        {
            cout<<name+col-1<<" "; //q1.) why here we get output in ascii value form (bcz due to implicit conversion)
        }
        cout<<endl;
    }
    return 0;
}