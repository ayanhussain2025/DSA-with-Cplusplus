//insert Node at the end of LL
#include<iostream>
using namespace std;

class Node
{
    public :
    int data;
    Node *next;

    Node(int value)
    {
        data=value;
        next=NULL;
    }
};
int main()
{
    Node *Head;
    Head=NULL;

    int arr[4]={2,4,6,8};
    for(int i=0;i<4;i++)
    {
        if(Head==NULL)
        {
            Head=new Node(arr[i]);
        }
        else
        {
            Node *temp;
            temp=Head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            // Node *tail=new Node(arr[i]);
            // temp->next=tail;
            //you can write upper two statement as
            temp->next=new Node(arr[i]);
        }
    }

    Node *temp=Head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    return 0;
}