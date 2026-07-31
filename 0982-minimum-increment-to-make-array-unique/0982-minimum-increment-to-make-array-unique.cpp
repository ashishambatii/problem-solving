class Solution {
public:
    //   bool condition(int t,vector<int>&nums){
    //     int cnt=0;
    //     for(int i=0;i<nums.size();i++){
    //         if(t==nums[i])
    //         cnt++;
    //         if(cnt==2)return true;
    //     }
    //     return false;
    //   }
    int minIncrementForUnique(vector<int>& nums) {
       int ans=0;
    //     unordered_map<int, int> freq;

    //    for (int x : nums)
    //     freq[x]++;
      sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
           int prev=nums[i];
           nums[i]=max(nums[i-1]+1,nums[i]);
           ans+=abs(prev-nums[i]);
        }
        return ans;
    }
};