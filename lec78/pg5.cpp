//previous code of inserting node at the end becomes very large or simply its time complixity becomes high
#include<iostream>
using namespace std;

class Node
{
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
    int arr[5]={2,4,6,8,10};

    Node *Head,*Tail;
    Tail=Head=NULL;
    //Insert value at the end Of ll
    for(int i=0;i<5;i++)
    {
        //Linked List is not present
        if(Head==NULL)
        {
            Head=new Node(arr[i]);
            Tail=Head;
        }
        //when Linked List is not present
        else
        {
            Tail->next=new Node(arr[i]);
            Tail=Tail->next;
        }
    }

    //traversing or printing the linklist

    Node *temp=Head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    return 0;
}