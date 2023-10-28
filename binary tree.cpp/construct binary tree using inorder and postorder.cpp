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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int, int> inorder_map;
        for (int i = 0; i < inorder.size(); i++) {
            inorder_map[inorder[i]] = i;
        }
        return buildTreeHelper(inorder, postorder, inorder_map, 0, inorder.size()-1, 0, postorder.size()-1);
    }
    
private:
    TreeNode* buildTreeHelper(vector<int>& inorder, vector<int>& postorder, unordered_map<int, int>& inorder_map, int inStart, int inEnd, int postStart, int postEnd) {
        if (inStart > inEnd) {
            return nullptr;
        }
        
        int rootValue = postorder[postEnd];
        int rootIndex = inorder_map[rootValue];
        
        TreeNode* root = new TreeNode(rootValue);
        int leftTreeSize = rootIndex - inStart;
        
        root->left = buildTreeHelper(inorder, postorder, inorder_map, inStart, rootIndex-1, postStart, postStart+leftTreeSize-1);
        root->right = buildTreeHelper(inorder, postorder, inorder_map, rootIndex+1, inEnd, postStart+leftTreeSize, postEnd-1);
        
        return root;
    }
};