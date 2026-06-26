class Solution {
public:
    // we need to tell whether is there any way that we can partition the array into two subsets such that the sum of the elements in both subsets is equal ...
    // the first case we have to partition the array into two, and that means the sum of each sub set should be half of the sum of all elements in the main array .. so firstly the whole sum should be multiple of 2 so that we can divide it into 2 , if it is not multiple of 2 there isnt any way for spliting it into 2 , so chekc that case..
    //then we need to find is it possible that we can sum the elements that it can reach to target (target is half of the whole sum), 
    // DRY RUN
    // [1,5,11,5]
    // dp memo -> sum=22 target =11 , 
    // dp array = [0,1,2,3,4,5,6,7,8,9,10,11]
    //we can tell sum=0 ,so that case is always true
    //  dp array = [0,1,2,3,4,5,6,7,8,9,10,11]
     //            [T,F,F,F,F,F,F,F,F,F,F, F]
     // itretion 1: nums[i]=1,
        //  going back wards ,
        //    dp[11]=dp[11]||dp[10]=false
        //    dp[10]=dp[10]||dp[9]=false
        //    dp[9]=dp[9]||dp[8]=false
        //    dp[8]=dp[8]||dp[7]=false
        //    dp[7]=dp[7]||dp[6]=false
        //    dp[6]=dp[6]||dp[5]=false
        //    dp[5]=dp[5]||dp[4]=false
        //    dp[4]=dp[4]||dp[3]=false
        //    dp[3]=dp[3]||dp[2]=false
        //    dp[2]=dp[2]||dp[1]=false
        //    dp[1]=dp[1]||dp[0]=true

        //    itreation 2 nums[i]=5
        //     dp[11]=dp[11]||dp[10]=false
        //    dp[10]=dp[10]||dp[9]=false
        //    dp[9]=dp[9]||dp[8]=false
        //    dp[8]=dp[8]||dp[7]=false
        //    dp[7]=dp[7]||dp[6]=false
        //    dp[6]=dp[6]||dp[5]=false
        //    dp[5]=dp[5]||dp[4]=false

        //    itreation 3 nums[i]=11
        //    dp[11]=dp[11]||dp[0]=true 

    bool canPartition(vector<int>& nums) {
       
       int total = 0;
        for(int num : nums)
            total += num;

        if(total % 2 != 0)
            return false;

        int target = total / 2;
       
        vector<bool> dp(target + 1, false);
        dp[0]=true;
        for(int i=0;i<nums.size();i++){
            for(int sum=target;sum>=nums[i];sum--){
                 dp[sum]=dp[sum]||dp[sum-nums[i]];
            }
        }
        return dp[target];
    }
};