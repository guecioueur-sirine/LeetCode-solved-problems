/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
     
     
    if(head==NULL){
        return NULL;
    }
    else{
    if (head->next==NULL){
        return head;
    }
    else{
          struct ListNode* p=head;
          struct ListNode* q=head->next;
         struct ListNode* newHead = reverseList(head->next);
          q->next=p;
          p->next=NULL;
          return newHead;

    }
    }
    
}
