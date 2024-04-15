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
    void solve(TreeNode*current,int sum,int &total_sum){
        int temp=sum;
        sum=sum*10+current->val; 
        if(current->left==NULL&& current->right==NULL){
            total_sum+=sum;
            return;
        }
        if(current->left){
            solve(current->left,sum,total_sum);
        }
        if(current->right){
            solve(current->right,sum,total_sum);
        }
        sum=temp;
    }
public:
    int sumNumbers(TreeNode* root) {
        int total_sum=0;
        solve(root,0,total_sum);
        return total_sum;
    }
};