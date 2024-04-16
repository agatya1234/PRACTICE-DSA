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
    TreeNode* add(TreeNode* root,int curr,int depth,int val){
        if(root==NULL)return 0;
        if(curr==depth-1){
             TreeNode*leftvalue=root->left;
              TreeNode*rightvalue=root->right;
              root->left=new TreeNode(val);
              root->right=new TreeNode(val);
              root->left->left=leftvalue;
              root->right->right=rightvalue;
                    return root;
              }
              root->left=add(root->left,curr+1,depth,val);
              root->right=add(root->right,curr+1,depth,val);
                  return root;
    }
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
           TreeNode*rootleft=new TreeNode(val);
           rootleft->left=root;
           return rootleft;
        }
        return add(root,1,depth,val);
    }
};