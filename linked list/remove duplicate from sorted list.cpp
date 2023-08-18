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
        if(head==NULL){
            return NULL;
        }
        ListNode *present=head;
        while(present!=NULL && present->next!=NULL){
            if(present->val==present->next->val){
                present->next=present->next->next;
            }
            else{
                present=present->next;
            }
        }
        return head;
    }
};