class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        // question similar to Q.no : 3090. Maximum Length Substring With Two Occurrences
     
         map<int,int>mp;
        int n=nums.size();
        int ans=0,l=0,r=0;
        while(r<n){
            mp[nums[r]]++;
           
            while(mp[nums[r]]>k){
                mp[nums[l++]]--;
            }
             ans=max(ans,r-l+1);
             r++;

        }
        return ans;
    }
};