class Solution {
public:
    int dp[2501][2501];
    int n;
   
    int solve(int i, int p,vector<vector<int>>&nums){
        if(i==n){
            return 0;
        }
        if( dp[p+1][i]!=-1)
           return dp[p+1][i];

        int take=0;

        if(p==-1 || nums[i][0]>nums[p][1]){
            take=1+solve(i+1,i,nums);

        }
        int skip=solve(i+1,p,nums);
        return dp[p + 1][i] = max(take, skip);
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        n=pairs.size();
        memset(dp, -1, sizeof(dp));
        sort(pairs.begin(),pairs.end());
        return solve(0,-1,pairs);
    }
};