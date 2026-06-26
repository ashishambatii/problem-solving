class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {
        int sum=0;
        for(int i=0;i<stones.size();i++){
            sum+=stones[i];
        }
        
        int target=sum/2;
        vector<bool>dp(target+1,false);
        dp[0]=true;
        for(int i=0;i<stones.size();i++){
            for(int sum=target;sum>=stones[i];sum--){
                dp[sum]=dp[sum]||dp[sum-stones[i]];
            }
        }
        for(int i=target;i>=0;i--){
            if(dp[i])return sum-2*i;
        }
        return 0;
    }
};