class Solution {
public:
     int cnt=0;
     int sum=0;
     void solve(vector<int>&nums,int target,int i){
           if(i==nums.size()){
             if(sum==target){
            cnt++;
            return;
           }
           }
          
           else{
            sum+=nums[i];
            solve(nums,target,i+1);
            sum-=nums[i];

            sum-=nums[i];
            solve(nums,target,i+1);
            sum+=nums[i];

           }

     }
    int findTargetSumWays(vector<int>& nums, int target) {
         solve(nums,target,0);
         return cnt;
    }
};