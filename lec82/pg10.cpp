//delete at any point
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

    int pos=3;//post where we have to delete the node
    if(head!=NULL)
    {
        //if we have to delete at first pos=1
        if(pos==1)
        {
            //if only 1st node exist
            if(head->next==NULL)
            {
                delete head;
                head=NULL;
            }
            //if multiple node exist
            else
            {
                Node *temp=head;
                head=head->next;
                head->prev=NULL;
                delete temp;
            }
        }
        else
        {
            Node *curr=head;
            while(--pos)
            curr=curr->next;
            //if delete at end
            if(curr->next==NULL)
            {
                curr->prev->next=NULL;
                delete curr;
            }
            //if delete at middle
            else
            {
                curr->prev->next=curr->next;
                delete curr;
            }
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