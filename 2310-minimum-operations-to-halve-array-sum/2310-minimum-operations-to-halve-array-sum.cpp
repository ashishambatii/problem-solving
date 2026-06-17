class Solution {
public:
    int halveArray(vector<int>& nums) {
         priority_queue<double>pq;
         int cnt=0;
            double sum=0;
         for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
            sum+=nums[i];
         }
         double t=sum;
         while(sum>t/2.0){
            double val=pq.top();
            pq.pop();
            pq.push(val/2.0);
            cnt++;
            sum-=(val/2.0);
            
            
         }
      
      return cnt;
         
    }
};