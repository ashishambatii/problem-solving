class Solution {
public:
    int maximumLengthSubstring(string s) {
        map<char,int>mp;
        int n=s.size();
        int ans=0,l=0,r=0;
        while(r<n){
            mp[s[r]]++;
           
            while(mp[s[r]]==3){
                mp[s[l++]]--;
            }
             ans=max(ans,r-l+1);
             r++;

        }
        return ans;
    }
};