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
    void travel(TreeNode*L, TreeNode*R,int level){
        if(!L|| !R){
            return;
        }

        if(level%2!=0){
            swap(L->val,R->val);
        }
        travel(L->left,R->right,level+1);
        travel(L->right,R->left,level+1);

    }
public:
    TreeNode* reverseOddLevels(TreeNode* root) {
           travel(root->left,root->right,1);
           return root;        
    }
};