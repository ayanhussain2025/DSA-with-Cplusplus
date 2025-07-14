#include<iostream>
using namespace std;

class queue
{
    int *arr;
    int front;
    int rear;
    int size;
    public:
    queue(int value)
    {
        arr = new int [value];
        front=-1;
        rear = -1;
        size=value;
    }

    //empty
    int IsEmpty()
    {
        return front==-1;
    }
    //full
    int IsFull()
    {
        return (rear+1)%size==front;
    }
    //push
    void push(int x)
    {
        if(IsEmpty())
        {
            rear=front=0;
            arr[0]=x;
        }
        else if(IsFull())
        {
            cout<<"Queue Overflow\n";
            return;
        }
        else
        {
            rear=(rear+1)%size;
            arr[rear]=x;
            cout<<x<<" pushed in the stack\n";
        }
    }

    //pop
    void pop()
    {
        if(IsEmpty())
        {
            cout<<"Queue Underflow\n";
            return;
        }
        else if(rear==front)
        {
            cout<<front<<" poped from the stack\n";
            rear=front=-1;
        }
        else 
        {
            cout<<front<<" poped from the stack\n";
            front=(front+1)%size;
        }
    }

    int start()
    {
        if(IsEmpty())
        {
            cout<<"Stack is empty!\n";
            return -1;
        }
        else
        {
            return arr[front];
        }
    }

};

int main()
{
    queue q(5);
    q.pop();
    cout<<q.IsEmpty()<<endl;
    q.push(5);
    q.push(8);
    q.push(9);
    q.push(28);
    q.push(54);
    q.push(7);
    cout<<q.IsFull()<<endl;
    q.pop();
    q.pop();
    int x=q.start();
    if(!q.IsEmpty())
    cout<<x<<endl;
    return 0;
}