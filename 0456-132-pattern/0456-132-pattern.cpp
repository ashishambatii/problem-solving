class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        //MONOSTACK
        stack<int>s;
        int n=nums.size();
        int t3=INT_MIN;

        for(int i=n-1;i>=0;i--){
            if(nums[i]<t3){
                return true;
            }
            while(!s.empty() && nums[i]>s.top()){
                t3=s.top();
                s.pop();
            }
            s.push(nums[i]);
        }
        return false;
    }
};