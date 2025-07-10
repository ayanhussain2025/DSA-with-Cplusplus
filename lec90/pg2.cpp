//optimize way of pg1
#include<iostream>
#include<stack>
using namespace std;

bool check(string s)
{
    int left=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(')
        left++;
        else
        {
            if(left==0)
            return 0;
            else left--;
        }
    }
    return left==0;
}
int main()
{
    string s="(())";
    cout<<check(s)<<endl;
}
