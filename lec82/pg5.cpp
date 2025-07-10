//How to convert an array into doubly Linked List : by inserting at end , optimize approach we will use tail pointer
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

int main()
{

    int arr[5]={20,30,60,54,32};
    Node *head,*tail;
    tail,head=NULL;
    //if dll not exist
    for(int i=0;i<5;i++)
    {
    if(head==NULL)
    {
        Node *temp= new Node(arr[i]);
        head=temp;
        tail=temp;
    }
    // if dll exist
    else
    {
       Node *temp=new Node(arr[i]);
       tail->next=temp;
       temp->prev=tail;
       tail=temp;
    }

    }
    //traverse the dll
    Node *trav=head;
    while(trav)
    {
        cout<<trav->data<<" ";
        trav=trav->next;
    }
    return 0;
}
