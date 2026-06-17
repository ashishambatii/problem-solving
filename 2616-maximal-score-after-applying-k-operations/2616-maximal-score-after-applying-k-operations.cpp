class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long sum=0;
     priority_queue<int>pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        for(int i=0;i<k;i++){
            sum+=pq.top();
            int val=ceil(pq.top()/3.0);
            pq.pop();
            pq.push(val);
        }
        return sum;
    }
};