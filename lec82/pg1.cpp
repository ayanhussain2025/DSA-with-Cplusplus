// Insert at start in dll
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
        Node *temp=new Node(5);
        temp->next=head;
        head->prev=temp;
        head=temp;
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