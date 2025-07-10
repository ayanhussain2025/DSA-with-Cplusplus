//Implementation of Stack using LL
#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int value)
    {
        data=value;
        next=NULL;
    }
};

class Stack
{
    Node *top;
    int size;

    public:
    Stack()
    {
        top=NULL;
        size=0;
    }

    //push Operation
    void push(int value)
    {
        Node *temp=new Node(value);
        //agr Heap Memory full
        if(temp==NULL)
        {
            cout<<"Stack Overflow\n";
            return;
        }
        else{
        temp->next=top;
        top=temp;
        size++;
        cout<<"Pushed "<<value<<" in the Stack\n";
        }
    }

    //pop operation
    void pop()
    {
        if(top==NULL)
        {
            cout<<"Stack Underflow\n";
        }
        else
        {
            Node *temp=top;
            cout<<"Popped "<<top->data<<" from the Stack\n";
            top=top->next;
            delete temp;
            size--;
        }
    }

    //peek operation
    int peek()
    {
        if(top==NULL)
        {
            cout<<"Stack is Empty\n";
            return -1;
        }
        else return top->data;
    }

    //IsEmpty
    bool IsEmpty()
    {
        // if(size==0)
        // return 1;
        // else return 0;
        return top==NULL;
    }

    //IsSize
    int IsSize()
    {
        return size;
    }
};

int main()
{
    Stack s;
    s.push(5);
    s.push(8);
    s.push(3);
    s.pop();
    cout<<s.peek()<<endl;
    cout<<s.IsEmpty()<<endl;
    cout<<s.IsSize()<<endl;

}