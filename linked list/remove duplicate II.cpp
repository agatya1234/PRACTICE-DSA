/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* dummy=new ListNode();
        dummy->next=head;
       ListNode* prev=dummy;
        //ListNode*curr=head;
        while(head!=NULL){
        if(head->next!=NULL && head->val== head->next->val){
            while(head->next!=NULL && head->val== head->next->val){
             head=head->next; }
             prev->next=head->next;
        }
        else {
          prev=head;
          }
          head=head->next;
    }
        return dummy->next;
         
    }
};