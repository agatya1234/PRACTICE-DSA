/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
      TreeNode*linkedlist(TreeNode*curr){
          curr=curr->left;
          while(curr->right!=NULL){
              curr=curr->right;
          }
          return curr;
      }
    void flatten(TreeNode* root) {
       // if(root==NULL)return;
        TreeNode*curr=root;
        while(curr!=NULL){
            if(curr->left){
                TreeNode*list=linkedlist(curr);
                list->right=curr->right;
                curr->right=curr->left;
                curr->left=NULL;

            }
            curr=curr->right;
        }
              return;
    }
};