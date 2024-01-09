class Solution {
public:
    void LeafValues(TreeNode* root, vector<int>& leafValues) {
        if (root == NULL) {
            return;
        }
         if (root->left == NULL && root->right == NULL) {
            leafValues.push_back(root->val);
        }
        LeafValues(root->left, leafValues);
        LeafValues(root->right, leafValues);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> ans1, ans2;
        LeafValues(root1, ans1);
        LeafValues(root2, ans2);
        int n = ans1.size();
        int m = ans2.size();
        if (n != m) {
            return false;
        }
        for (int i = 0; i < n; i++) {
            if (ans1[i] != ans2[i]) {
                return false;
            }
        }

        return true;
    }
};
