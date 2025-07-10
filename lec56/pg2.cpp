//count vowel in a string done by me 
#include<iostream>
using namespace std;

int countvowel(string s,int index,int count)
{
    //base case
    if(index==-1)
    return count;
    //increasing count if we find a vowel
    if(s[index]=='a' || s[index]=='e' || s[index]=='e' || s[index]=='i'|| s[index]=='0' || s[index]=='u')
    count++;
    //checking further in string
    return countvowel(s,index-1,count);
}
int main()
{
    string s = "ayan hussain";
    cout<<countvowel(s,s.size()-1,0);
}
