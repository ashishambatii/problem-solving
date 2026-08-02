class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
     long long ans=INT_MIN;
     for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            long long d=gcd(nums[i],nums[j]);
            d*=d;
            long long t=(1LL*nums[i]*nums[j])/d;
            ans=max(ans,t);
        }
     }
     return ans;

    }
};