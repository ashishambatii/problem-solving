class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int rrr=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                rrr|=nums[i];
            }
        }
        return rrr;
    }
};