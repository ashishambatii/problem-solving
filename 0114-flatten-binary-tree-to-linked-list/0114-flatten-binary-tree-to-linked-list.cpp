class Solution {
public:
    vector<TreeNode*> nums;

    void preorder(TreeNode* root) {
        if (!root) return;

        nums.push_back(root);
        preorder(root->left);
        preorder(root->right);
    }

    void flatten(TreeNode* root) {
        if (!root) return;

        preorder(root);

        for (int i = 0; i < nums.size() - 1; i++) {
            nums[i]->left = nullptr;
            nums[i]->right = nums[i + 1];
        }

        nums.back()->left = nullptr;
        nums.back()->right = nullptr;
    }
};