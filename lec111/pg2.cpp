//Inserttion or creation of Binary Search Tree
#include<iostream>
using namespace std;

//creating Node class 
class Node
{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int value)
    {
        data=value;
        left=right=NULL;
    }
};

Node* insert(Node* root,int target) //here we can do pass by reference to save some space 
{
    if(!root)
    {
        Node* temp = new Node(target);
        return temp;
    }

    if(target<root->data)
    root->left = insert(root->left,target);
    else root->right = insert(root->right,target); //Time complexity for each function call = O(h) = O(n); 

    return root; //root ke ander hamesha root ka adress hi jarha hoga
}

void Inorder(Node* root)
{
    if(!root)
    return;

    //left
    Inorder(root->left);
    //node
    cout<<root->data<<" ";
    //right
    Inorder(root->right);
}
int main()
{
    int arr[]={3,7,4,1,6,8};
    Node* root=NULL;
    //inserting element one by one from array using recursive function
    for(int i=0;i<6;i++)
    root=insert(root,arr[i]); 
    // we create here our tree but how we know that it get created successfully, for that we have to know traversal (pg2.cpp)
    //Time complexity for creating the whole tree = O(h^2) = O(n^2)
    //Space complexity for creating the whole tree = O(h) = O(n) = maximum height of the tree

    //Inorder Traversal(LNR)
    Inorder(root);
}