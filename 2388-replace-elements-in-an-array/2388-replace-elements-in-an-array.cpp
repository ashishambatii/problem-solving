class Solution {
public:
   
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
      unordered_map<int,int>mp;
      for(int i=0;i<nums.size();i++){
        mp[nums[i]]=i;
      }
      for(int i=0;i<operations.size();i++){
        int pval = operations[i][0];
        int nval = operations[i][1];
        int ind = mp[pval];
        nums[ind]=nval;
        mp.erase(pval);
        mp[nval]=ind;

      }
      return nums;
    }
};