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
  priority_queue<pair<int, int>> pq;
    void modi(TreeNode* root){
        int level=1;
         queue<TreeNode*>q;
         q.push(root);
         while(!q.empty()){
          int size=q.size();
          long long sum=0;
          while(size--){
            TreeNode* temp=q.front();
            q.pop();
            sum+=temp->val;
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
          } 

             pq.push({sum,-level});
             level++;
         }
    }
public:
    int maxLevelSum(TreeNode* root) {
        modi(root);
      auto val=pq.top();
        return -val.second;
    }
};