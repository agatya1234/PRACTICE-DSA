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
    int minDepth(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        queue<TreeNode*>q;
        q.push(root);
        int i = 0;
        while (!q.empty()) {
            i++;
            int k = q.size();
            for (int j = 0; j < k; j++) {
                TreeNode* a = q.front();
                if (a -> left) {
                    q.push(a -> left);
                } 
                if (a -> right) {
                    q.push(a -> right);
                }
                q.pop();
                if (a -> left == NULL && a -> right == NULL) {
                    return i;
                }
            }
        }
        return -1;
    }
};