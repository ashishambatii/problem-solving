class Solution {
public:
    int countSubstrings(string s) {
        int n=s.size();
        vector<vector<bool>>dp(n,vector<bool>(n,false));
        int cnt=0;
        for(int len=1;len<=n;len++){
            for(int i=0;i+len-1<n;i++){
                int j=len+i-1;
                if(len==1){
                    dp[i][j]=true;
                }
                else if(len==2){
                     dp[i][j]=(s[i]==s[j]);
                }
                else {
                    dp[i][j]=(dp[i+1][j-1] && (s[i]==s[j]));
                }
                if(dp[i][j])
                cnt++;
            }
        }
        return cnt;
    }
};