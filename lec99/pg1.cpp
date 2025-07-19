//I solve it in a first try;
#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node *prev;
    Node(int value)
    {
        data=value;
        next=NULL;
        prev=NULL;
    }
};

class dequeue
{
    Node *front;
    Node *rear;
    public:
    dequeue()
    {
        front=NULL;
        rear=NULL;
    }

    //push front
    void push_front(int x)
    {
        //dequeue is empty()
        if(front==NULL)
        {
            front=new Node(x);
            rear=front;
            cout<<x<<" push front into the dequeue\n";
        }
        //dequeue is not empty
        else
        {
            Node *temp = new Node(x);
            temp->next=front;
            front->prev=temp;
            front=temp;
            cout<<x<<" push front into the dequeue\n";  
        }
    }

    //push_back
    void push_back(int x)
    {
        //dequeue is empty()
        if(rear==NULL)
        {
            rear=new Node(x);
            front=rear;
            cout<<x<<" push back into the dequeue\n";
        }
        //dequeue is not empty
        else
        {
            Node *temp = new Node(x);
            temp->prev=rear;
            rear->next=temp;
            rear=temp;
            cout<<x<<" push back into the dequeue\n";
        }
    }

    //pop_back
    void pop_front()
    {
        if(front==NULL)
        {
            cout<<"dequeue underflow\n";
            return;
        }
        else
        {
            cout<<front->data<<" poped front from the dequeue\n";
            Node *temp=front;
            front=front->next;
            delete temp;
            if(front)
            front->prev=NULL;
            else rear=NULL;
        }
    }

    //pop_back
    void pop_back()
    {
        if(rear==NULL)
        {
            cout<<"dequeue underflow\n";
            return;
        }
        else
        {
            cout<<rear->data<<" poped front from the dequeue\n";
            Node *temp=rear;
            rear=rear->prev;
            delete temp;
            if(rear)
            rear->next=NULL;
            else front=NULL;
        }
    }

    //start
    int start()
    {
        if(front==NULL)
        {
            cout<<"Dequeue is Empty\n";
            return -1;
        }
        else
        {
            return front->data;
        }
    }

    //end
    int end()
    {
        if(rear==NULL)
        {
            cout<<"Dequeue is Empty\n";
            return -1;
        }
        else
        {
            return rear->data;
        }
    }

};

int main()
{
    dequeue d;
    d.push_front(10);
    d.push_front(25);
    d.push_back(43);
    d.push_back(12);
    cout<<d.start()<<endl;
    cout<<d.end()<<endl;
    d.pop_front();
    d.pop_back();
    cout<<d.start()<<endl;
    cout<<d.end()<<endl;

    return 0;
}