//creat ll using recursion and inserting node at end
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

    //inserting at the middle
    int x=3;//third position ke baad node insert karna hai
    int value=20; // 20 value ko 3 node ke baad ek extra node bnake daldo
    Node *temp;
    temp=Head;

    x--;
    while(x--)
    {
        temp=temp->next;
    }
    Node *temp2;
    temp2=new Node(value);
    temp2->next=temp->next;
    temp->next=temp2;

    temp=Head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}