//count vowel in a string done by rohit negi 
#include<iostream>
using namespace std;

int count(string s,int index)
{
    //base case
    if(index==-1)
    return 0;
    //increasing count if we find a vowel
    if(s[index]=='a' || s[index]=='e' || s[index]=='e' || s[index]=='i'|| s[index]=='0' || s[index]=='u')
    return 1+(s,index-1);
    else return count(s,index-1);
}
int main()
{
    string s = "ayan hussain";
    cout<<count(s,s.size()-1);
}
