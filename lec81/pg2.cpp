//problem (gfg) : Remove every k'th node

// class Solution {
//   public:
//     Node* deleteK(Node* head, int k) {
//         // code here
//         //if k==1 , means we have to remove every node
//         if(k==1)
//         return NULL;
        
//         Node *curr=head,*prev=NULL;
//         int count=1;
        
//         while(curr)
//         {
//             //if count==k , means remove the node
//             if(count==k)
//             {
//                 prev->next=curr->next;
//                 delete curr;
//                 count=1;
//                 curr=prev->next;
//             }
//             //when count!=k , skip the node and move forward
//             else
//             {
//                 prev=curr;
//                 curr=curr->next;
//                 count++;
//             }
//         }
//         return head;
        
//     }
// };