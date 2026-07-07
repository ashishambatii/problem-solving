class Solution {
public:
// backasstracking (srinivas is my backtracking teracher)
// generating all subsets using backtracking and store them in a array
vector<vector<int>>subsets;
vector<int>temp;
void solve(int i,vector<int>&nums){
   if(i==nums.size()){
    subsets.push_back(temp);
    return;
   }
   //ignore that
   solve(i+1,nums);
   //include that
   temp.push_back(nums[i]);
   solve(i+1,nums);
   //back track that 
   temp.pop_back();
}
    int subsetXORSum(vector<int>& nums) {
        solve(0,nums);
        int sum=0;
        for(int i =0;i<subsets.size();i++){
            int t=0;
            
            for(int j=0;j<subsets[i].size();j++){
               t=t^subsets[i][j];
            }
            sum+=t;
        }
        return sum;
    }
};