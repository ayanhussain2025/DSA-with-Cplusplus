//Problem-1 : Level Order Traversal (rohit negi way ) : when i solve this question on gfg the question get updated in want to give answer in 2darray so i have to make slighly change in the logic

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
    //Level Order Traversal
    // queue<Node*>q; //creating queue
    q.push(root);
    vector<int>ans;
    Node *temp;
    //start traversing the tree using level order traversal
    while(!q.empty())
    {
        temp=q.front();
        q.pop();
        ans.push_back(temp->data);
        //left
        if(temp->left)
        q.push(temp->left);
        //right
        if(temp->right)
        q.push(temp->right);
    }

    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
}