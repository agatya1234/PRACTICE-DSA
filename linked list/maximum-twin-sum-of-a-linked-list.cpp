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
    int pairSum(ListNode* head) {
       vector<int>ans;
       
       while(head!=NULL){
           ans.push_back(head->val);
           head=head->next;
           }
           int sum=0;
           int maxin=0;
           int n=ans.size();
           for(int i=0;i<n/2;i++){
               sum=ans[i]+ans[n-1-i];
               maxin=max(maxin,sum);
           }
           return maxin;
            
    }
};