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
    bool isPalindrome(ListNode* head) {
       deque<int>ans;
       while(head){
           ans.push_back(head->val);
           head=head->next;
       } 
       while(!ans.empty()){
        if(ans.front()!=ans.back())return false;
        ans.pop_back();
        if(!ans.empty()) ans.pop_front();
       }
       return true;
    }
};