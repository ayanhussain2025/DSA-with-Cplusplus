// //problem (gfg) Sort a linked list of 0s, 1s and 2s : https://www.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1
// //2nd metthod (rohit bahiya homework) , done it
// class Solution {
//   public:
//     Node* segregate(Node* head) {
//         // code here
//         Node *head0=new Node(-1);
//         Node *head1=new Node(-1);
//         Node *head2=new Node(-1);
//         Node *tail0=head0;
//         Node *tail1=head1;
//         Node *tail2=head2;
        
//         while(head)
//         {
//             if(head->data==0)
//             {
//                 tail0->next=head;
//                 head=head->next;
//                 tail0=tail0->next;
//                 tail0->next=NULL;
//             }
//             else if(head->data==1)
//             {
//                 tail1->next=head;
//                 head=head->next;
//                 tail1=tail1->next;
//                 tail1->next=NULL;
//             }
//             else
//             {
//                 tail2->next=head;
//                 head=head->next;
//                 tail2=tail2->next;
//                 tail2->next=NULL;
//             }
//         }
        
//         head1=head1->next;
//         head2=head2->next;
        
//         if(head1)
//         {
//             tail0->next=head1;
//             tail0=tail1;
//         }
//         if(head2)
//         {
//             tail0->next=head2;
//         }
//         head0=head0->next;
//         return head0;
        
//     }
// };