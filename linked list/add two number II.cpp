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
    ListNode* rev(ListNode* h) {
        ListNode* cur = h;
        ListNode* prev = NULL;
        while(cur) {
            ListNode* n = cur->next;
            cur->next = prev;
            prev = cur;
            cur = n;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*rev_list1=rev(l1);
         ListNode*rev_list2=rev(l2);
        ListNode*dummy=new ListNode(0);
        ListNode*temp=dummy;
        
        int carry=0; int sum=0;
         while(true){
             sum=0;
             sum+=carry;
             if(rev_list1){
                 sum+=rev_list1->val;
                 rev_list1 = rev_list1->next;
             }
             if(rev_list2){
                 sum+= rev_list2->val;
                 rev_list2 = rev_list2->next;
             }
             carry=sum/10;
             sum=sum%10;
             temp->next = new ListNode(sum);
             temp = temp->next;
             if(!rev_list1 && !rev_list2 && (carry==0))break;        
         }

         return rev(dummy->next);
         
    }
};