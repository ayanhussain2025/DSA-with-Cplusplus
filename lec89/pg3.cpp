#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int>S;
    S.push(4);
    S.push(7);
    S.push(8);
    cout<<S.size()<<endl;
    S.pop();
    cout<<S.top()<<endl;
    return 0;
}