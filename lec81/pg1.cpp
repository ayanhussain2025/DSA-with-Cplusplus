//problem(leetcode) : 19. Remove Nth Node From End of List : https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/

// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         int count=0;
//         ListNode *temp=head;
//         while(temp)
//         {
//             count++;
//             temp=temp->next;
//         }
//         count-=n;
//         if(count==0)
//         {
//             temp=head;
//             head=head->next;
//             delete temp;
//             return head;
//         }

//         ListNode *curr=head,*prev=NULL;
//         while(count--)
//         {
//             prev=curr;
//             curr=curr->next;
//         }
//         prev->next=curr->next;
//         delete curr;

//         return head;
//     }
// };


