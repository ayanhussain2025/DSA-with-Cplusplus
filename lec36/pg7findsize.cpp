#include <iostream>
using namespace std;

int main()
{
    //find the size of string manually
    string s="Ayan";
    int size=0;
    while(s[size]!='\0')//string ke last me hamesha ek null character hota hai
    {
        size++;
    }
    cout<<size;
}