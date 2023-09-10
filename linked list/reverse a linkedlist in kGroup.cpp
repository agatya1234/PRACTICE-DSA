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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL){
            return NULL;
        }
        
        int avaliable= k, cnt = 0;
        ListNode* temp = head;
        while(avaliable > 0 && temp != NULL){
            temp = temp -> next;
           avaliable--;
        }
        if(avaliable==0){
        int count = 0;
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = NULL;

        while(curr != NULL && count < k){
            forward = curr-> next;
            curr-> next = prev;
            prev = curr;
            curr = forward;
            count++;
        }

        if(forward != NULL){
            head-> next = reverseKGroup(forward,k);
        }

        return prev;
        }
        return head;
    }
};