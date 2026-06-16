class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
    sort(nums.begin(),nums.end());
      int n=nums.size();
      vector<int>ans;
      bool flag=true;
      int alice;
      int bob;
      stack<int>s;
      for(int i=0;i<n;i++){
          s.push(nums[i]);
          if(s.size()==2){
            while(!s.empty()){
                ans.push_back(s.top());
                s.pop();
            }
          }
      }
      return ans;

    }
};