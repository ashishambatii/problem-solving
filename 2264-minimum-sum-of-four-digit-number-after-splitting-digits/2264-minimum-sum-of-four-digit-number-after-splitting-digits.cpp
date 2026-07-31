class Solution {
public:
    int minimumSum(int num) {
        vector<int>nums;
        while(num>0){
            int rem=num%10;
            nums.push_back(rem);
            num=num/10;
        }
        sort(nums.begin(),nums.end());
        if(nums[0]==0&& nums[1]==0 && nums[2]==0 && nums[3]==0)return 0;
        else if(nums[0]==0&& nums[1]==0 && nums[2]==0)return nums[3];
        else if(nums[0]==0 && nums[1]==0)return nums[2]+nums[3];
        else if(nums[0]==0)return (nums[1]*10 + nums[3]+nums[2]);
        else {
            return (nums[0]*10 + nums[3])+(nums[1]*10 +nums[2]);
        }
        return -1;
    }
};