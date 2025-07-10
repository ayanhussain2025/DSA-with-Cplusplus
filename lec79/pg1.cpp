//DELETE FIRST NODE
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

    //delte first node
    if(Head!=NULL) //edge case handled here : when Head == NULL then there is no need to delete first node becuase ll is not exist
    {
        Node *temp=Head;
        Head=Head->next;
        delete temp;
    }

    Node *temp=Head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}