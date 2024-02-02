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
    int maxLevelSum(TreeNode* root) {
        int maxi=INT_MIN;
        queue<TreeNode*>q;
        q.push(root);
        int level=1;
        int temp=0;
        while(!q.empty()){
            int n=q.size();
            int sum=0;
         while(n!=0){
             TreeNode* ans=q.front();
             q.pop();
             sum += ans->val;
             if(ans->left!=NULL){
                 q.push(ans->left);
             }if(ans->right!=NULL){
                 q.push(ans->right);
             }
             n--;
         }  
         if(sum>maxi){
             maxi=sum;
             temp=level;
         }
         level++; 
        }
        return temp;
    }
};