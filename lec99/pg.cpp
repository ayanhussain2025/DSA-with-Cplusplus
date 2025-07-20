//implementing dequeue using circular array
#include<iostream>
using namespace std;
class dequeue
{
    int *arr;
    int front;
    int rear;
    int size;

    public:
    dequeue(int value)
    {
        size=value;
        arr = new int[value];
        rear=front=-1;
    }

    //IsEmpty
    bool IsEmpty()
    {
        return front==-1;
    }

    //IsFull
    bool IsFull()
    {
        return (rear+1)%size==front;
    }

    //push front
    void push_front(int x)
    {
        if(IsFull())
        cout<<"Dequeue Overflow\n";
        else if(IsEmpty())
        {
            arr[0]=x;
            front=rear=0;
            cout<<"pushed "<<x<<" in front of the Dequeue\n";
        }
        else
        {
            front=(front-1+size)%size;
            arr[front]=x;
            cout<<"pushed "<<x<<" in  front of the Dequeue\n";
        }
    }

    //push_back
    void push_back(int x)
    {
        if(IsFull())
        cout<<"Dequeue Overflow\n";
        else if(IsEmpty())
        {
            arr[0]=x;
            front=rear=0;
            cout<<"pushed "<<x<<" in back of the Dequeue\n";
        }
        else
        {
            rear=(rear+1)%size;
            arr[rear]=x;
            cout<<"pushed "<<x<<" in back of the Dequeue\n";
        }
    }

    //pop front
    void pop_front()
    {
        if(IsEmpty())
        cout<<"Dequeue is Empty\n";
        else
        {
            if(front==rear)
            {
                cout<<"poped "<<arr[front]<<" front from the Dequeue\n";
                rear=front=-1;
            }
            else
            {
                cout<<"poped "<<arr[front]<<" front from the Dequeue\n";
                front=(front+1)%size;
            }
        }
    }

    //pop_back

    void pop_back()
    {
        if(IsEmpty())
        cout<<"Dequeue is Empty\n";
        else
        {
            if(front==rear)
            {
                cout<<"poped "<<arr[rear]<<" back from the Dequeue\n";
                rear=front=-1;
            }
            else
            {
                cout<<"poped "<<arr[rear]<<" back from the Dequeue\n";
                front=(rear-1+size)%size;
            }
        }
    }

    //start
    int start()
    {
        if(IsEmpty())
        {
            cout<<"Dequeue Is Empty\n";
            return -1;
        }
        else
        {
            return arr[front];
        }
    }

    int end()
    {
        if(IsEmpty())
        {
            cout<<"Dequeue Is Empty\n";
            return -1;
        }
        else
        {
            return arr[rear];
        }
    }
};
int main()
{
    dequeue d(5);
    d.pop_back();
    d.push_front(5);
    d.push_front(10);
    d.push_back(20);
    d.push_back(32);
    cout<<d.start()<<endl;
    cout<<d.end()<<endl;
    d.push_back(-19);
    d.push_front(-21);
    return 0;
}