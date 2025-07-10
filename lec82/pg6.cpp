//create dll by using recursion
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

    //travering the array
    Node *trav=head;
    while(trav)
    {
        cout<<trav->data<<" ";
        trav=trav->next;
    }

    return 0;
}