//Implementation of Stack using array
#include<iostream>
using namespace std;

class Stack
{
    int *arr;
    int size;
    int top;

    public:
    //flag :- to solve the problem of storing the negative value
    bool flag;
    //construtor use to tell the actual size of stack or the array
    Stack(int s)
    {
        size=s;
        top=-1;
        arr = new int[s];
        flag=1; //means stack is empty
    }

    //push Operation
    void push(int value)
    {
        if(top==size-1)
        {
            cout<<"Stack Overflow\n";
            return;
        }
        else
        {
            top++;
            arr[top]=value;
            cout<<"Pushed "<<value<<" in the Stack\n";
            flag=0; //means stack is not empty
        }
    }

    //Pop Operation
    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack Underflow\n";
            return;
        }
        else
        {
            // cout<<"Popped "<<arr[top]<<" from the Stack\n"; //you can write this also
            top--;
            cout<<"Popped "<<arr[top+1]<<" from the Stack\n";
            if(top==-1)
            flag=1;
        }
    }

    //Peek Operation
    int peek()
    {
        if(top==-1)
        {
            cout<<"Stack is Empty\n";
            return -1; //assuming here that we're storing the positive value in the stack
        }
        else return arr[top];
    }

    //IsEmpty
    bool IsEmpty()
    {
        // if(top==-1)
        // return 1;
        // else return 0;
        return top==-1;
    }
    //IsSize
    int IsSize()
    {
        return top+1;
    }
};

int main()
{
    Stack s(5);

    int value=s.peek();
    if(s.flag==0) //this will solve our confusion for stack is empty and -1 statement , is stack empty by this only message will print not -1;
    cout<<value<<endl;
    //if you dont want to use flag then you can also use IsSize() function
}