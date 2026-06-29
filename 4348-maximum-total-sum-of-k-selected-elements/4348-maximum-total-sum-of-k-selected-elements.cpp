class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        long long ans=0;
        int i=0;
        for(;i<k;i++){
            if(mul==0)break;
            long long pro=1LL * nums[i]*mul;
            mul--;
            ans+=pro;
        }
        for(;i<k;i++){
            ans+=nums[i];
        }
        return ans;
    }
};