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
   set<int> s;
    void babuji(TreeNode* root){
     if(root){
        s.insert(root->val);
        babuji(root->left);
        babuji(root->right);
     }

    }
    int findSecondMinimumValue(TreeNode* root) {
        babuji(root);
        
        if(s.size()>=2){
        auto it = s.begin();  
         advance(it, 1); 
        return *it;
        }
         
         return -1;

    }
};