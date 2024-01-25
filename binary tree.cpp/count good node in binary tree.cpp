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
    void dfs(TreeNode* root,int max,int &count){
        if(root==NULL){
            return;
        }
        if(root->val>=max){
            count++;
            max=root->val;
        }
        dfs(root->left,max,count);
        dfs(root->right,max,count);

    }
    int goodNodes(TreeNode* root) {
        int count=0;
        dfs(root,root->val,count);
        return count;
    }
};