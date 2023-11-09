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
    int widthOfBinaryTree(TreeNode* root) {
        if (root == NULL) return 0;
        queue<pair<TreeNode*,int>>q;
        int Max_width=1;
        q.push({root,0});
        while(!q.empty()){
            int size=q.size();
            int start=q.front().second;
            int end=q.back().second;
            Max_width=max(Max_width,end-start+1);
            while(size--){
                int id=q.front().second-end;
                TreeNode*node=q.front().first;
                q.pop();
                if(node->left){
                    q.push({node->left,2*id+1});
                }
                if(node->right){
                    q.push({node->right,2*id+2});
                }
            }


        }
        return Max_width;
    }
};
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if (root == NULL) return 0;
        queue<pair<TreeNode*,int>>q;//storing node and its index
        q.push({root,0});//at staring we are inserting root and its index.
        long ans=0;
        while(!q.empty()){
            int n=q.size();
            int start=q.front().second;//find start or leftmost  index of present level
            int end=q.back().second;//find end or rightmost index of present level
            ans = max<long>(ans , end-start+1);//find max btw ans and starting and ending
           for(int i=0;i<n;i++){
               pair<TreeNode*,int>p=q.front();
               TreeNode* node =p.first;
               long idx=p.second;//idx is parent node
               q.pop();
               if(node->left)q.push({node->left,2*idx+1});
               if(node->right)q.push({node->right,2*idx+2});
           }
        }
        return ans;


        
        
    }
};

