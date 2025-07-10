//delete x posiiton node by using recursion : my way
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

void deletepositionX(Node *curr,Node *prev,int x)
{
    //base case : when we reach at the position
    if(x==0)
    {
        prev->next=curr->next;
        delete curr;
        return;
    }

    deletepositionX(curr->next,curr,--x);
}

int main()
{
    Node *Head;
    int arr[4]={10,20,11,8};
    Head=CreateLinkedList(arr,0,4);

    //delete node of any position x
    //note : linklist is present always
    int x=3;
    
    //edge case when x=1 , means delete first node and only first not exist or multiple
    if(x==1)
    {
        Node *temp=Head;
        Head=Head->next;
        delete temp;
    }
    else
    {
    
        deletepositionX(Head,NULL,--x);
    }    
    Node *temp=Head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
    return 0;
}
