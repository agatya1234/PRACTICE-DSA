class Solution {
 public:
  ListNode* swapPairs(ListNode* head) {
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
    return head;

  }
};
