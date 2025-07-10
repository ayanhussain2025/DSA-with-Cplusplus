// Insert at end in dll
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
    Node *head=NULL;

    //if dll not exist
    if(head==NULL)
    {
        Node *temp= new Node(5);
        head=temp;
    }
    // if dll exist
    else
    {
        Node *curr=head;
        while(curr->next)
        {
            curr=curr->next;
        }
        Node *temp=new Node(7);
        curr->next=temp;
        temp->prev=curr;
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