//problem - Middle of LinkList : https://leetcode.com/problems/middle-of-the-linked-list/submissions/1677230031/
//solution 1;
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         //first we'll count the number of nodes
//         int count=0;
//         ListNode *temp=head;
//         while(temp)
//         {
//             temp=temp->next;
//             count++;
//         }
//         //count/2 kardo
//         count/=2;
//         temp=head;
//         //middle pe joa
//         while(count--)
//         temp=temp->next;

//         //middle wale ka address return kardo
//         return temp;

//     }
// };


//solution-2 :by using slow pointer and fast pointer

// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode *slow=head,*fast=head;
//         while(fast&&fast->next)
//         {
//             slow=slow->next;
//             fast=fast->next->next;
//         }
//         return slow;
//     }
// };

//hw : rotate ll by k from right side