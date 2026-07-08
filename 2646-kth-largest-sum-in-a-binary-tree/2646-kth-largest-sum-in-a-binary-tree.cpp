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
     priority_queue<long long> pq;
    void driver(TreeNode*root){
          queue<TreeNode*> q;
          q.push(root);
          while(!q.empty()){
             int size=q.size();
           
              long long sum=0;
             while(size--){
             TreeNode*a=q.front();
              q.pop();
              sum+=a->val;
              
              if(a->left){
                q.push(a->left);
              }
              if(a->right){
                q.push(a->right);
              }

             }
             pq.push(sum);

          }
    }
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
       driver(root);
        if(pq.size()<k)return -1;
        while(--k){
               pq.pop();
        }
        return pq.top();
    }
};