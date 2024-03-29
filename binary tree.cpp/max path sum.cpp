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
    int maxpath(TreeNode*root,int &ans){
        if(root==NULL)return 0;
        int left=maxpath(root->left,ans);
        int right=maxpath(root->right,ans);
        int straightpath = max(root->val,max(left,right)+root->val);
        int curvepath=max(straightpath,left+right+root->val);
        ans=max(ans,curvepath);
        return straightpath;
    }
    int maxPathSum(TreeNode* root) {
        int ans=INT_MIN;
        maxpath(root,ans);
        return ans;
    }
};