class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n=nums.size();
        int mid=n/2;
        int midi=nums[mid];
        int cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]==midi)cnt++;
            if(cnt>1)return false;
        }
        return true;
    }
};