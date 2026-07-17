class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
         unordered_map<int, int> freq;
       int n=nums.size();
    for (int i = 0; i < n; i++) {
        freq[nums[i]]++;
    }
    int paircnt=0;
    int r=0;
    for(auto &it : freq){
        paircnt+=it.second/2;
        r+=it.second%2;
    }
    return {paircnt,r};
    }
};