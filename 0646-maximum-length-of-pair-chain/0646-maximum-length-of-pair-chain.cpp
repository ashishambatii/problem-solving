class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        int n=pairs.size();
        vector<int>dp(n,1);
        sort(pairs.begin(),pairs.end());
        int maxlength=1;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(pairs[i][1]<pairs[j][0]){
                    dp[j]=max(dp[j],dp[i]+1);
                   
                }
            }
             maxlength=max(maxlength,dp[i]);
        }
        return maxlength;
    }
};