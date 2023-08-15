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
     ListNode* reverseList(ListNode* head) {
        ListNode*prev=NULL;
        while(head){
            ListNode*next=head->next;
            head->next=prev;
            prev=head;
            head=next;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *second=reverseList(slow->next);
        slow->next=NULL;
        ListNode*first=head;
        while(second){
            ListNode* temp1=first->next;
            first->next=second;
            ListNode* temp2=second->next;
            second->next=temp1;
            first=temp1;
            second=temp2;
        }
    }
};