//Traversing in tree : PreOrder , InOrder , PostOrder .
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

//PreOrder Traversing
void PreOrder(Node* root)
{
    //base case
    if(root==NULL)
    return;
    //Node
    cout<<root->data<<" ";
    //left
    PreOrder(root->left);
    //right
    PreOrder(root->right);
}

//InOrder Traversing
void InOrder(Node *root)
{
    //basecase
    if(root==NULL)
    return;
    //Left
    InOrder(root->left);
    //Node
    cout<<root->data<<" ";
    //Right
    InOrder(root->right);
}

//PostOrder
void PostOrder(Node *root)
{
    //basecase
    if(root==NULL)
    return;
    //left
    PostOrder(root->left);
    //right
    PostOrder(root->right);
    //node
    cout<<root->data<<" ";
}

int main()
{
    cout<<"Enter the value of root node : ";
    Node *root;
    root = BinaryTree();
    cout<<"\nPreOrder : ";
    PreOrder(root);
    cout<<"\nInOrder : ";
    InOrder(root);
    cout<<"\nPostOrder : ";
    PostOrder(root);
}