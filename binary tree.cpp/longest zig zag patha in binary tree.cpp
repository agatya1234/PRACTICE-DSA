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
    int ans=0;
    enum Direction { left, right };//or we can use bool also.
    void solve(TreeNode* root, int count, Direction i) {
        if (root == NULL) return;
        ans = max(ans, count);
        if (i == left) {
        solve(root->right, count + 1, right);//right=true
        solve(root->left, 1, left);//left=false
        } 
        else { 
           solve(root->left, count + 1, left);
           solve(root->right, 1, right);
        }
    }

    int longestZigZag(TreeNode* root) {
    
        solve(root, 0, left);
        solve(root, 0, right);
        return ans;
    }
};
