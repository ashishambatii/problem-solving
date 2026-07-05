class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
      int n=nums.size();
      vector<pair<int,int>>mem(n);
        int mama=INT_MIN;
        for(int i=0;i<nums.size();i++){
            mem[i].first=nums[i];
            int maxi=INT_MIN;
            int mini=INT_MAX;
            int a=nums[i];
            while(a>0){
                int rem=a%10;
                a=a/10;
                maxi=max(maxi,rem);
                mini=min(mini,rem);
            }
            mem[i].second=(maxi-mini);
            mama=max(mama,(maxi-mini));
        }
        int sum=0;
        for(int i=0;i<n;i++){
            if(mem[i].second==mama){
                sum+=mem[i].first;
            }
        }
        return sum;


    //      unordered_map<int, vector<int>> groups;

    //    for (auto &it : mem) {
    // groups[it.second].push_back(it.first);
    //     }

    //  for (auto &it : groups) {
    
    // for (int idx : it.second)
       
    // }



    }
};