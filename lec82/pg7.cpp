//Insert at any point or middle
#include<iostream>
using namespace std;

class Node
{
    public :
    int data;
    Node *next;
    Node *prev;

    Node(int value)
    {
        data=value;
    }
};

Node* createDLL(int arr[],int index,int size,Node *back)
{
    if(index==size)
    return NULL;

    Node *temp= new Node(arr[index]);
    temp->prev=back;
    temp->next = createDLL(arr,index+1,size,temp);
    return temp;
}

int main()
{
    int arr[4]={1,2,3,4};
    Node *head=NULL;
    head=createDLL(arr,0,4,head);

    //insert at any point
    int pos=2; //insert after the second node
        //if we have to insert at first ,i.e : if(pos==0)
        if(pos==0)
        {
            //linkedlist not exist
            if(head==NULL)
            {
                Node *temp=new Node(5);
            }
            //linkedlist exists
            else
            {
                Node *temp=new Node(5);
                temp->next=head;
                head->prev=temp;
            }
        }
        //if we have to insert at any random position
        else
        {
            Node *curr=head;
            //go to the postion
            while(--pos)
            {
                curr=curr->next;
            }
            //insert at end
            if(curr->next==NULL)
            {
                Node *temp=new Node(5);
                curr->next=temp;
                temp->prev=curr;
            }
            //insert at middle
            else
            {
                Node *temp=new Node(5);
                temp->next=curr->next;
                temp->prev=curr;
                curr->next=temp;
                temp->next->prev=temp;
            }

        }

    //travering the array
    Node *trav=head;
    while(trav)
    {
        cout<<trav->data<<" ";
        trav=trav->next;
    }

    return 0;
}