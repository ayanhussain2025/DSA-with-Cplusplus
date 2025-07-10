#include <iostream>
using namespace std;

char convert(char name)
{
    char ans=name-'a'+'A';
    return ans;
}

int main()
{
    char name;
    cout<<"enter the character  : ";
    cin>>name;
    cout<<convert(name);

}


//my code
// #include<iostream>
// using namespace std;
// char alpha(char a)
// {
//     char b=a-32;
//     return b;
// }

// int main()
// {
//    char a;
//    cout<<"enter the letter ";
//    cin>>a;
///    cout<<alpha(a);
// }

// rohit negi bahiya
