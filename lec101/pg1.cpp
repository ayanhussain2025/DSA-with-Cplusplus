//implementation of Binary Tree datastructure : my version
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
        left=NULL;
        right=NULL;
    }
};

int main()
{
    int x;
    cout<<"Enter value of root element :";
    cin>>x;
    //creating queue for storing the adress , adress is needed to know kiska left and right fill karna hai
    queue<Node*>q;
    int first,second;
    Node *temp=new Node(x);
    cout<<"value of root element is "<<temp->data;
    q.push(temp);
    //start filling value in the tree
    while(!q.empty())
    {
        temp=q.front();
        q.pop();
        //filling the value in left node
        cout<<"Enter the value of left Node of "<<temp->data<<" : ";
        cin>>first;
        //checking if programmer wants to create the left node
        if(first!=-1)
        {
            temp->left=new Node(first);
            q.push(temp->left);
            cout<<"value of left of "<<temp->data<<" is "<<first<<endl;
        }

        //creating right node
        cout<<"Enter the value of right Node of "<<temp->data<<" : ";
        cin>>second;
        //checking if programmer wants to create the right node
        if(second!=-1)
        {
            temp->right=new Node(second);
            q.push(temp->right);
            cout<<"value of right node of "<<temp->data<<" is "<<second<<endl;
        }
        
    }
}