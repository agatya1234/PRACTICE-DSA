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
    ListNode* mergeNodes(ListNode* head) {
        ListNode*slow=head;
        ListNode*fast=head->next;
        int sum=0;
        while(fast){
            if(fast->val!=0){
             sum=sum+fast->val;
             fast=fast->next;
             }
             else{
                 slow->val=sum;
                 slow->next=fast->next;
                 fast=fast->next;
                 slow= fast;
                 sum=0;
                 }
             
        }
        return head;
    }
};