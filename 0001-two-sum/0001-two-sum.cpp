class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>hash;
        for(int i=0;i<nums.size();++i){
            int c=target-nums[i];
            if(hash.find(c)!=hash.end()){
                return {hash[c],i};
            }
            hash[nums[i]]=i;
        }
        return {}; // No solution found
    }
};
