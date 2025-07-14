#include<iostream>
using namespace std;
class Node
{
    public :
    int data;
    Node *next;
    Node(int value)
    {
        data=value;
        next=NULL;
    }
};

class queue
{
    Node* front;
    Node* rear;
    public:
    queue()
    {
        front=NULL;
        rear=NULL;
    }

    //IsEmpty()
    int IsEmpty()
    {
        return front==NULL;
    }

    //Push()
    void push(int x)
    {
        if(IsEmpty())
        {
            rear = new Node(x);
            front=rear;
            cout<<x<<" Pushed into the queueu\n";
        }
        else
        {
            rear->next =new Node(x);
            rear = rear->next;
            cout<<x<<" Pushed into the queueu\n";
        }
    }

    //Pop()
    void pop()
    {
        if(IsEmpty())
        {
            cout<<"Queue Underflow\n";
            return;
        }
        cout<<front->data<<" popped from the stack\n";
        Node *temp=front;
        front=front->next;
        delete temp;
    }

    //start()
    int start()
    {
        if (IsEmpty())
        {
            cout<<"stack is empty\n";
            return -1;
        }
        return front->data;
    }
};
int main()
{
    queue q;
    q.pop();
    cout<<q.IsEmpty()<<endl;
    q.push(5);
    q.push(8);
    q.push(9);
    q.push(28);
    q.push(54);
    q.push(7);
    q.pop();
    q.pop();
    int x=q.start();
    if(!q.IsEmpty())
    cout<<x<<endl;
    return 0;
}