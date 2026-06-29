/**
 Given the head of a linked list, rotate the list to the right by k places
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 int lengthOfLinkedlist (struct ListNode* head){
    int i=0;
    struct ListNode* q = head;
    while(q != NULL){
        i++;
        q= q->next;
    }
    return i;
    

 }
 //==============================================================
void  BeforeLast_pointToNull(struct ListNode* head){ // a helper procedure that make the before last element in LL points to NULL
   struct ListNode* q = head;
   while ((q->next)->next != NULL){  // parcour to the before last element in LL , q points to it 
    q=q->next; 
   } 
   q->next=NULL;
}
//======================================================================================================
struct ListNode* lastElement (struct ListNode* head){
    struct ListNode* q = head;
   while (q->next != NULL){  // parcour to the before last element in LL , q points to it 
    q=q->next; 
   } 
  return q;
}

struct ListNode* rotateRight(struct ListNode* head, int k) {
    if (head == NULL){return NULL;}
    if(head->next == NULL){return head;  // case of a single node
    }
    if (k==0){return head;}
    int i;
    struct ListNode* q=head;
     int n= lengthOfLinkedlist (head);
     k=k%n;
    for (i=0;i<k;i++){
     q=lastElement(head) ;
     BeforeLast_pointToNull(head);
    q->next = head; 
    head = q;
    }
    return head;
}
