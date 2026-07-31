class Solution {
public:
    int minOperations(vector<int>& nums) {
        // spidermon, spideyboy, spider srinivas 
        int ans=0;
        for(int i=1;i<nums.size();i++){
            int prev=nums[i];
            nums[i]=max(nums[i-1]+1,nums[i]);
            ans+=abs(nums[i]-prev);
        }
        return ans;
    }
};