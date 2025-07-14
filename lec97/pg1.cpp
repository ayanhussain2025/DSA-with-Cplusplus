//printing all the element of queue with deleting the element
#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int>q;
    q.push(7);
    q.push(0);
    q.push(8);
    q.push(10);
    q.push(34);

    //now printing the element in queue while poping
    int n=q.size();
    while(n--)
    {
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }

    return 0;
}