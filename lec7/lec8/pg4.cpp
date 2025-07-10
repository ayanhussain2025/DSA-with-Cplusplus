//my method
// #include<iostream>
// using namespace std;
// int main()
// {
//     int row,col,n;
//     cout<<"Input the number : ";
//     cin>>n;
//     for(row=1;row<=n;row=row+1)
//     {
//         for(col=1;col<=n-row;col=col+1)
//         {  
//             //space print
//             cout<<" "<<" ";
//         }
//         for(col=1;col<=row;col=col+1)
//         {   
//             //character print
//             char c = 'A'+col-1;
//             cout<<c<<" ";

//         }
//         //switch line
//         cout<<endl;
//     }
// }


//sir method
#include<iostream>
using namespace std;
int main()
{
    int row,col,n;
    cout<<"Input the number : ";
    cin>>n;
    for(row=1;row<=n;row=row+1)
    {
        for(col=1;col<=n-row;col=col+1)
        {  
            //space print
            cout<<" "<<" ";
        }
        for(char name='A';name<='A'+row-1;name=name+1)
        {   
            //character print
            cout<<name<<" ";

        }
        //switch line
        cout<<endl;
    }
}
