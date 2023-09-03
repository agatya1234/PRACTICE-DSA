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
    ListNode* rotateRight(ListNode* head, int k) {
       if(head==NULL || head->next==NULL || k==0)return head;
       ListNode*len=head;
       int count=1;
       while(len->next!=NULL){
           count++;
           len=len->next;
       }
       len->next=head;
       k=k%count;
       k=count-k;
       while(k--)len=len->next;
       head=len->next;
       len->next=NULL;
       return head;
    }
    
};