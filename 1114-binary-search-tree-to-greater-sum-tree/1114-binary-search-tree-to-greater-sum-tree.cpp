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
    //after many days GST, no no bst.. I thank my friend SrinudADDY , we were preparing for the dsa lab exam(3rd sem), during that time he explained me how to solve these bst questions ..
    
    int sum=0;
    void babu(TreeNode*root){
        //inorder
        //-- go right , print, go left
        if(root){
            babu(root->right);
            sum+=root->val;
            root->val=sum;
            babu(root->left);
        }
    }

public:
   // inordertraversal
    TreeNode* bstToGst(TreeNode* root) {
        babu(root);
        return root;
    }
};