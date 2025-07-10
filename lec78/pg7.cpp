//creat ll using recursion and inserting node at start
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

Node* CreateLinkedList(int arr[],int index,int size,Node *prev)
{
    //base case
    if(index==size)
    {
        return prev;
    }
    Node *temp;
    temp=new Node(arr[index]);
    temp->next=prev;
    return CreateLinkedList(arr,index+1,size,temp);
    
}

int main()
{
    Node *Head;
    int arr[4]={2,4,6,8};
    Head=CreateLinkedList(arr,0,4,NULL);
    Node *temp=Head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}