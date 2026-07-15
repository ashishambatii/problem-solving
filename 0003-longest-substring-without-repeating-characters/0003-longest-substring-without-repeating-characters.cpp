class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>hash(256,0);
        int l=0;
        int n=s.size();
        int maxi=0;
        for(int r=0;r<n;r++){
            hash[s[r]]++;
            while(hash[s[r]]>1){
                
                    hash[s[l]]--;
                l++;
            }
       maxi=max(maxi,r-l+1);

        }
        return maxi;
    }
};