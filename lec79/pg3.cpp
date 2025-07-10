//DELETE MIDDLE
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

Node* CreateLinkedList(int arr[],int index,int size)
{
    //base case
    if(index==size)
    {
        return NULL;
    }
    Node *temp;
    temp=new Node(arr[index]);
    temp->next=CreateLinkedList(arr,index+1,size);
    return temp;
}

int main()
{
    Node *Head;
    int arr[4]={2,4,6,8};
    Head=CreateLinkedList(arr,0,4);

    //delete node of any position x
    //note : linklist is present always
    int x=2;
    
    //edge case when x=1 , means delete first node and only first not exist or multiple
    if(x==1)
    {
        Node *temp=Head;
        Head=Head->next;
        delete temp;
    }
    else
    {
        x--;
        Node *curr=Head,*prev=NULL;
        while(x--)
        {
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        delete curr;
    }
    Node *temp=Head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}
