//How to convert an array into doubly Linked List : by inserting at start
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
    int arr[5]={10,20,30,60,80};

    Node *head=NULL;

    for(int i=0;i<5;i++)
    {
    //if dll not exist
    if(head==NULL)
    {
        Node *temp= new Node(arr[i]);
        head=temp;
    }
    // if dll exist
    else
    {
        Node *temp=new Node(arr[i]);
        temp->next=head;
        head->prev=temp;
        head=temp;
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