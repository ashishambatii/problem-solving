class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      if(s.empty())return 0;
        int l=0;
        int n=s.size();

      unordered_map<char, int> mp;
      mp[s[l]]=1;
int r=1;
int ans=1;
        while(r<n){
           
           mp[s[r]]++;
           
           while(mp[s[r]]>1){
            mp[s[l]]--;
            l++;
           }
        ans=max(ans,r-l+1);
        r++;

        }
        return ans;

    }
};