class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>mem(n+1);
        for(int i=n-1;i>=0;i--){
            mem[i]=max(mem[i+1],nums[i]);
        }
        int maxi=INT_MIN;
        for(int i=0;i+k<n;i++){
            maxi=max(nums[i]+mem[i+k],maxi);
        }
        return maxi;
    }
};