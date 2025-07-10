#include<iostream>

using namespace std;

void lowtoup(string &s,int index)
{
    //base case
    if(index==-1)
    return;
    s[index]='A'+s[index]-'a';
    lowtoup(s,index-1);
}
int main()
{
    string str="ayan";
    lowtoup(str,3);
    cout<<str;
}