class Solution {
 public:
  /*ListNode* swapPairs(ListNode* head) {
    if(head==NULL ||head->next==NULL){
      return head;
    }
    ListNode*p=head;
    ListNode*q=head->next;
    while(head!=NULL){
        swap(p->val,q->val);
        if(!(q->next &&q->next->next))break;
        p=p->next->next;
        q=q->next->next;
    }
    return head;*/
    ListNode*dummy=new ListNode();
    ListNode* ptr1=dummy;
     ListNode*curr=head;
    while(curr!=NULL && curr->next!=NULL){
       ptr1->next=curr->next;
       curr->next=curr->next->next;
       ptr1->next->next=curr;
       curr=curr->next;
       ptr1=ptr1->next->next;
    }

      return dummy->next;


  }
};
