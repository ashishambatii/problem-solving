class Solution {
public:
    vector<vector<int>>ans;
    vector<int>temp;
    void solve(vector<int>&nums,vector<bool>&seen){
      if(temp.size()==nums.size()){
        ans.push_back(temp);
      }
      for(int i=0;i<nums.size();i++){
        if(seen[i])continue;
        temp.push_back(nums[i]);
        seen[i]=true;
        solve(nums,seen);
        temp.pop_back();
        seen[i]=false;
      }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<bool>seen(n,false);
        solve(nums,seen);
        return ans;
        
    }
};