class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        // trying some easy questions only for some motivation , please srinivas help me so that i can solve some medium questions
        int me=INT_MAX;
        int you =INT_MIN;
        for(int i=0;i<nums.size();i++){
            me=min(me,nums[i]);
            you=max(you,nums[i]);
        }
        vector<int>ans;
        for(int i=me;i<=you;i++){
            if(find(nums.begin(), nums.end(), i) == nums.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};