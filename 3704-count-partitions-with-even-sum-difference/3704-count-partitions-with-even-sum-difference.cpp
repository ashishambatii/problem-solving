class Solution {
public:
    int countPartitions(vector<int>& nums) {
        // vector<int>prefix;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            // prefix.push_back(sum);
        }
        // int r=nums.size()-1;
        int a=0;
        int cnt=0;
        for(int i=0;i<nums.size()-1;i++){
             a+=nums[i];
             if(abs(2*a-sum)%2==0)cnt++;
        }
        return cnt;
    }
};