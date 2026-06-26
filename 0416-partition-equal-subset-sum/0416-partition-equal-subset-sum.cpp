class Solution {
public:
    bool canPartition(vector<int>& nums) {
       
       int total = 0;
        for(int num : nums)
            total += num;

        if(total % 2 != 0)
            return false;

        int target = total / 2;
       
        vector<bool> dp(target + 1, false);
        dp[0]=true;
        for(int i=0;i<nums.size();i++){
            for(int sum=target;sum>=nums[i];sum--){
                 dp[sum]=dp[sum]||dp[sum-nums[i]];
            }
        }
        return dp[target];
    }
};