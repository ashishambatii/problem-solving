class Solution {
public:
    //  int f(int i,vector<int>&nums, int k){
    //    if(i>=nums.size())return 0;
    //     int maxi=INT_MIN;
    //     int result=0;

    //      for(int j=i;j<nums.size() && j-i+1<=k; j++){
    //       maxi=max(maxi,nums[j]);
    //       result=max(result,((j-i+1)*maxi)+f(j+1,nums,k));
       

    //      }
    //         return result;
    //  }

    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        // return f(0,arr,k);
        int n=arr.size();
       vector<int>dp(n+1,0);
       for(int i=1;i<=n;i++){
        int currmax=INT_MIN;
        for(int j=1;j<=k && i-j>=0;j++){
            currmax=max(currmax,arr[i-j]);
            dp[i]=max(dp[i],(j*currmax)+dp[i-j]);

        }
        
       }
      
      return dp[n];
    }
};