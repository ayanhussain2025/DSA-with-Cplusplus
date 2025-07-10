//creating a node dynamically
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
    Head=new Node(10);
    cout<<Head->data<<endl;
    cout<<Head->next;

    //Insertion of data at start on LL
    //when LL is not present
    if(Head==NULL)
    {
        Head=new Node(5);
    }
    //when LL is present
    else
    {
        Node *temp;
        temp= new Node(10);
        temp->next=Head;
        Head=temp;
    }
}