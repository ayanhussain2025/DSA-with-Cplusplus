#include<iostream>

using namespace std;

void revstr(string &str,int start,int end)
{
    //base case
    if(start>=end)
    return;
    swap(str[start],str[end]);
    revstr(str,start+1,end-1);
}
int main()
{
    string str="ayan";
    revstr(str,0,3);
    cout<<str;
}