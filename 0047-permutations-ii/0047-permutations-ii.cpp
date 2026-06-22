class Solution {
public:
    vector<int>temp;
    vector<vector<int>>ans;
    
    void solve(vector<int>&nums,vector<bool>&used){
           if(temp.size()==nums.size()){
            ans.push_back(temp);
            return;
           }
           
           for( int i=0;i<nums.size();i++){
             if(used[i])continue;
             if(i > 0 &&
   nums[i] == nums[i-1] &&
   !used[i-1])
    continue;
             temp.push_back(nums[i]);
             used[i]=true;

             solve(nums,used);

             temp.pop_back();
             used[i]=false;

           }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        vector<bool>used(n,false);
        solve(nums,used);
        return ans;

    }
};