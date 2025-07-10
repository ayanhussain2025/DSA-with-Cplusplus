//delete x posiiton node by using recursion : rohit bahiya way
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

Node* deleteNode(Node *curr,int x)
{
    //basecase,when x==1
    if(x==1)
    {
        Node *temp=curr->next;
        delete curr;
        return temp;
    }

    curr->next=deleteNode(curr->next,x-1);
    return curr;
}

int main()
{
    Node *Head;
    int arr[4]={10,20,11,8};
    Head=CreateLinkedList(arr,0,4);

    //delete node of any position x
    //note : linklist is present always
    int x=3;
    deleteNode(Head,x);  //yha pe deleteNode ek address return karega jisko mai store nahi karha raha hu kyu wo first node ka adress hai already wo head me store hai 
       
    Node *temp=Head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
    return 0;
}
