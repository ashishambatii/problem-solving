class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        int j;
        for(j=0;j<k && j<nums.size();j++){
            sum+=nums[j];
        }
        int i=0;
        int maxi=sum;
        while(j!=nums.size()){
            sum-=nums[i];
            sum+=nums[j];
            maxi=max(sum,maxi);
            j++;
            i++;
        }
        return (double)maxi/k; 
    }
};