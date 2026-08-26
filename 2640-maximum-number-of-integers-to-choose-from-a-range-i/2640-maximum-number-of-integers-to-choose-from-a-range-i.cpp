class Solution {
public:
    int maxCount(vector<int>& v, int n, int maxSum) {
        vector<int>nums;
        for(int i=1;i<=n;i++){
            if(find(v.begin(), v.end(), i) == v.end()){
               nums.push_back(i);
            }
        }
        sort(nums.begin(),nums.end());
        int sum=0;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(sum+nums[i]<=maxSum){
                sum+=nums[i];
                 cnt++;
            }
        }
        return cnt;
    }
};