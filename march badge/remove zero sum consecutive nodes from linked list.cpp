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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode*temp=new ListNode(0);
        temp->next=head;
        int sum=0;
        unordered_map<int,ListNode*>mp;
        mp[0]=temp;
        while(head!=NULL){
            sum+=head->val;
            mp[sum]=head;
            head=head->next;
        }
        head=temp;
        sum=0;
        while(head!=NULL){
            sum+=head->val;
            head->next=mp[sum]->next;
            head=head->next;
        }
       return temp->next;
    }
};