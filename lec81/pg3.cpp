// //rotate LL by K from right : https://leetcode.com/problems/rotate-list/

// //my solution
// int calNodes(ListNode *head)
// {
//     ListNode *temp=head;
//     int count=1;
//     while(temp->next!=NULL)
//     {
//         count++;
//         temp=temp->next;
//     }
//     return count;
// }
// ListNode* rotateK(ListNode *head)
// {
//     ListNode *curr=head;
//     ListNode *prev=NULL;
//     while(curr->next!=NULL)
//     {
//         prev=curr;
//         curr=curr->next;
//     }
//     curr->next=head;
//     prev->next=NULL;
//     head=curr;

//     return head;
// }

// class Solution {
// public:
//     ListNode* rotateRight(ListNode* head, int k) {



//         if(head==NULL||head->next==NULL)
//         return head;
//         //no of nodes
//         int r=0; 
//         int N=calNodes(head);
//         if(k>=N)
//         r=k%N;
//         else r=k;

//         if(r==0)
//         return head;

//         //function to rotate the linklist by k time form right
//         for(int i=1;i<=r;i++)
//         head=rotateK(head);


//         return head;
//     }
// };




//rohit bahiya solution

// class Solution {
// public:
//     ListNode* rotateRight(ListNode* head, int k) {
//         //if no linklist exist or just only one node exist
//         if(head==NULL || head->next==NULL)
//         return head;

//         //couning the number of nodes
//         ListNode *temp=head;
//         int count=0;
//         while(temp)
//         {
//             count++;
//             temp=temp->next;
//         }

//         k=k%count;  //there is no need to rotate list multiple time for the same result 
//         //when we dont have to rotate the list
//         if(k==0)
//         return head;

//         count-=k;

//         ListNode *curr=head,*prev=NULL;
//         while(count--)
//         {
//             prev=curr;
//             curr=curr->next;
//         }
//         prev->next=NULL;  //breaking the link
//         ListNode *tail=curr;

//         //lets move the tail pointer to the last node
//         while(tail->next!=NULL)
//         {
//             tail=tail->next;
//         }

//         tail->next=head;
//         head=curr;

//         return head;

//     }
// };


//method-3 : one more way we can use an array or vector , but some times intervier want ki tume node ko sirf rotate karo dont play tricks....