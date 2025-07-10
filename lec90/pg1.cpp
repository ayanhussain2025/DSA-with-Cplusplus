//parenthesis is valid or not
#include<iostream>
#include<stack>
using namespace std;

bool check(string s)
{
    stack<char>st;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(')
        st.push(s[i]);
        else
        {
            if(st.empty())
            return 0;
            else st.pop();
        }
    }
    return st.empty();
}
int main()
{
    string s="(())";
    cout<<check(s)<<endl;
}

//we can solve this question without using extra space or without using stack see stack