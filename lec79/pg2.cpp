//DELETE LAST NODE
// Edge Cases :
// 1.) LL NOT EXIT
// 2.) LL EXIST , BUT IT HAS ONLY ONE Node
// 3.) LL EXIST , AND IT HAS MULTIPLE NODE
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

int main()
{
    Node *Head;
    int arr[4]={2,4,6,8};
    Head=CreateLinkedList(arr,0,4);

    //my way :
//    Node *curr=Head;
//    Node *prev=NULL;

//    while(curr->next!=NULL)
//    {
//     prev=curr;
//     curr=curr->next;
//    }

//    // 1.) LL NOT EXIT , no need to delte , so LL must exist
//    if(Head!=NULL)
//    {
//     // 2.) LL EXIST , BUT IT HAS ONLY ONE Node
//     if(Head->next==NULL)
//     {
//         Node *temp=Head;
//         Head=NULL;
//         delete temp;
//     }
//     // 3.) LL EXIST , AND IT HAS MULTIPLE NODE
//     else
//     {
//         delete curr;
//         prev->next=NULL;
//     }
//    }



//rohit negi way :
   //delete a node at end
   if(Head!=NULL)
   {
      //only one node at end
      if(Head->next==NULL)
      {
        // Node *temp=Head;
        // delete temp;
        // Head=NULL;
          //or
        delete Head;
        Head=NULL;  
      }
      //when multiple node exist
      else
      {
          Node *curr=Head;
          Node *prev=NULL;
          //run a while loop tab tak cur->next==NULL nahi hojata
          while(curr->next!=NULL)
          {
            prev=curr;
            curr=curr->next;
          }
        //prev=curr->next;
            //or
        prev->next=NULL;
        delete curr;    

      }
   }



    Node *temp=Head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}
