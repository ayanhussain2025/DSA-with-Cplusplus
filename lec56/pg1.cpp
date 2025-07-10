#include <iostream>
using namespace std;
bool pal(string s,int start,int end)
{
    //base case
    if(start>=end)
    return 1;
    //if string not a palindrome or not matched
    if(s[start]!=s[end])
    return 0;
    //if elment of string matching or matched
    return pal(s,start+1,end-1);
}

int main()
{
    string s="naman";
    cout<<pal(s,0,s.size()-1);
}