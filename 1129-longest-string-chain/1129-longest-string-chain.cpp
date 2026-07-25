class Solution {
public:
    //  int dp[2501][2501];
     int n;
     bool condition(string s, string t){
        if(t.size()!=s.size()+1){
            return false;
        }
        int i=0, j=0;
        bool skipped =false;
        while(i<s.size() && j<t.size()){
            if(s[i]==t[j]){
                i++;
                j++;
            }
            else{
                if(skipped){
                    return false;
                }
                skipped=true;
                j++;
            }
        }
        return true;
     }
    //  int solve(int i, int p,vector<string>&words){
    //     if(i==n)return 0;
    //     if(dp[p+1][i]!=-1){
    //         return dp[p+1][i];
    //     }
    //     int take=0;
    //     if(p==-1 || condition(words[p],words[i])){
    //         take = 1+solve(i+1,i,words);
    //     }
    //     int skip=solve(i+1,p,words);

    //     return dp[p + 1][i] = max(take, skip);
    //  }
    int longestStrChain(vector<string>& words) {
         n=words.size();
         sort(words.begin(), words.end(),
     [](string &a, string &b) {
         return a.size() < b.size();
     });
    //     memset(dp, -1, sizeof(dp));
    //     return solve(0,-1,words);
    //  int n=pairs.size();
        vector<int>dp(n,1);
        // sort(pairs.begin(),pairs.end());
        int maxlength=1;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(condition(words[i],words[j])){
                    dp[j]=max(dp[j],dp[i]+1);
                   
                }
            }
             maxlength=max(maxlength,dp[i]);
        }
        return maxlength;
    }
};