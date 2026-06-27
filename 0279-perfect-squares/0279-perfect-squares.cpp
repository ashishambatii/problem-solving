class Solution {
public:
    int numSquares(int n) {
        if(n==1)return 1;
        vector<int>sq;
        for(int i=1;i<n;i++){
            sq.push_back(i*i);
            if((i*i)>=n)break;
        }
        
        vector<int>dp(n+1,n+1);
        dp[0]=0;
        for(int i=0;i<sq.size();i++){
            for(int j=sq[i];j<=n;j++){
                dp[j]=min(dp[j],dp[j-sq[i]]+1);
            }
        }
        return dp[n];
    }
};