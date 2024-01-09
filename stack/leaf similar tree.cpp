class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> ans1, ans2;
        stack<TreeNode*> stack1;
        stack1.push(root1);
           while (!stack1.empty()) {
            TreeNode* current = stack1.top();
            stack1.pop();

            if (current != nullptr) {
                if (current->left == nullptr && current->right == nullptr) {
                    ans1.push_back(current->val);
                } else {
                    stack1.push(current->right);
                    stack1.push(current->left);
                }
            }
        }
        stack<TreeNode*> stack2;
        stack2.push(root2);

        while (!stack2.empty()) {
            TreeNode* current = stack2.top();
            stack2.pop();

            if (current != nullptr) {
                if (current->left == nullptr && current->right == nullptr) {
                    ans2.push_back(current->val);
                } else {
                    stack2.push(current->right);
                    stack2.push(current->left);
                }
            }
        }
           
    
        return ans1 == ans2;
    }
};
