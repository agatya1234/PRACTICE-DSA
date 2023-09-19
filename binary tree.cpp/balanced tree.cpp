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
int maxDepth(TreeNode* root) {
        if(root ==NULL)return 0;
        int LD= maxDepth(root->left);
        int RD= maxDepth(root->right);
        int ans=1+max(LD,RD);
        return ans;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)return true;
        bool lh=isBalanced(root->left);
        bool rh=isBalanced(root->right);
        bool ans=abs(maxDepth(root->left)-maxDepth(root->right))<=1;
        if(lh && rh && ans){
        return true;
        }
        else 
           return false;
    }
};