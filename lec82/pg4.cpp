//How to convert an array into doubly Linked List : by inserting at end
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
    Node *head=NULL;
    //if dll not exist
    for(int i=0;i<5;i++)
    {
    if(head==NULL)
    {
        Node *temp= new Node(arr[i]);
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
        Node *temp=new Node(arr[i]);
        curr->next=temp;
        temp->prev=curr;
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
//this code take extra time complexity , lets optimize it in pg5.cpp