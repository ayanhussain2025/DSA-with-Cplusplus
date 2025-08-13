//implementation of Binary Tree datastructure : rohit bahiya
#include<iostream>
#include<queue>
using namespace std;
//creating Node
class Node
{
    public:
    int data;
    Node *left;
    Node *right;
    //constructor
    Node(int value)
    {
        data=value;
        left=right=NULL;
    }
};

int main()
{
    int x;
    cout<<"Enter value of root element: ";
    cin>>x;
    int first,second;
    queue<Node*>q;
    Node *root=new Node(x);
    q.push(root);
    //Build the tree
    while(!q.empty())
    {
        Node *temp=q.front();
        q.pop();
        //left node
        cout<<"Enter the Left valur of "<<temp->data<<" : ";
        cin>>first; //left node ki value
        if(first!=-1)
        {
            temp->left=new Node(first);
            q.push(temp->left);
        }
        //right node
        cout<<"Enter the Right value of "<<temp->data<<" : ";
        cin>>second;  //irght node ki value
        if(second!=-1)
        {
            temp->right=new Node(second);
            q.push(temp->right);
        }
        
    }
}