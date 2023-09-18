class Solution {
public:

ListNode* midd(ListNode *head){
    ListNode *slow = head;
    ListNode *fast = head;
    while(fast->next !=NULL && fast->next->next !=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

ListNode* mergelist(ListNode *left,ListNode *right)
{
    if(left==NULL || right==NULL)
    {
        return (left==NULL) ? right : left;
    }
    ListNode *ans = new ListNode(0); // made a new ll with  value;
    ListNode *curr = ans;
    while(left != nullptr && right!=nullptr)
    {
        if(left->val < right->val)
        {
            curr->next = left;
            left=left->next;
        }
        else
        {
            curr->next = right;
            right=right->next;

        }
        curr=curr->next;
    }
    if(left!=NULL || right!=NULL)
    {
        curr->next =(left!=NULL) ? left : right;
    }
    return ans->next;

}
    ListNode* sortList(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }

        ListNode *newhead= head;
        ListNode *mid = midd(head);
        newhead= mid->next;
        mid->next=NULL;
        ListNode *left = sortList(head);
        ListNode *right = sortList(newhead);

        return mergelist(left,right);
    }
};