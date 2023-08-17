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
    ListNode* swapNodes(ListNode* head, int k) {
      ListNode* count_ptr=head;
      int count=0;
      while(count_ptr->next!=NULL)
      {
          count++;
          count_ptr=count_ptr->next;
      }  
        ListNode* left_ptr=head;
         for(int i=0;i<k-1;i++)
      {
          left_ptr=left_ptr->next;
      }  
        int len=(count-k)+1;
        ListNode* right_ptr=head;
      for(int i=0;i<len;i++)
      {
          right_ptr=right_ptr->next;
      }
      swap(left_ptr->val,right_ptr->val);
      return head;
    }
};