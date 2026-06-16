class Solution {
public:
    int sum(int n){
        int s = 0;
        while(n){
            s += n % 10;
            n /= 10;
        }
        return s;
    }

    int maximumSum(vector<int>& nums) {
        unordered_map<int,int> mp;
        int ans = -1;

        for(int x : nums){
            int s = sum(x);

            if(mp.count(s)){
                ans = max(ans, mp[s] + x);
            }

            mp[s] = max(mp[s], x);
        }

        return ans;
    }
};