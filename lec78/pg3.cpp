//copy data of an array 
#include<iostream>
using namespace std;

class Node{
    public:
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

    int arr[5]={12,14,15,19,20};

    for(int i=0;i<5;i++)
    {
        if(Head==NULL)
        {
            Head=new Node(arr[i]);
        }
        else
        {
            Node *temp;
            temp=new Node(arr[i]);
            temp->next=Head;
            Head=temp;
        }
    }

    //printing the LL

    Node *temp;
    temp=Head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}