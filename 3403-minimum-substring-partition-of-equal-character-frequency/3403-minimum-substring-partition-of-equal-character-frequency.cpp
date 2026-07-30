class Solution {
public:
    bool condition(vector<int>&c){
       
        int target=0;
         int f;
        for(int i =0;i<26;i++){
            if(c[i]==0)continue;
            else
            f=c[i];
            if(target==0)
            target=f;
            else if(target!=f){
                return false;
            }
        }
        return true;
    }
    int minimumSubstringsInPartition(string s) {
        int n=s.size();
        vector<int>dp(n,n);
        for(int end=0;end<n;end++){
                vector<int>c(26,0);
            for(int start=end;start>=0;start--){
                 c[s[start]-'a']++;
                if(condition(c)){
                    dp[end]=start>0? min(dp[end],1+dp[start-1]):1;
                }
            }
        }
        return dp[n-1];
        
    }
};