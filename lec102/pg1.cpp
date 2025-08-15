//method - 2 : for implementing Binary Tree here in this we dont create tree node level by level , here we create node of left side first then left side
#include<iostream>
using namespace std;

//write a class for making node of a tree
class Node
{
    public:
    int data;
    Node* left;
    Node *right;
    Node(int value)
    {
        data=value;
        left=right=NULL;
    }
};

Node* BinaryTree()
{
    int x;
    cin>>x;
    if(x==-1) //1.)agar x ki value -1 hai to node create nahi hoga
    return NULL;
    //2.)agar -1 nahi hai to Node create hoga , so lets create ndoe
    Node *temp = new Node(x);
    //3.)ab left side create karna hai iska
    cout<<"Enter the left value of "<<x<<" : ";
    temp->left = BinaryTree();
    //4.)jab required left side create hojaye to right side create kardo
    cout<<"Enter the right vaue of "<<x<<" : ";
    temp->right = BinaryTree();
    //5.)last me jab dono create hojaye to use node ka adress upper wale node ko dedo
    return temp;
}

int main()
{
    cout<<"Enter the value of root node : ";
    Node *root;
    root = BinaryTree();
}