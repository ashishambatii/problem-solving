class Solution {
public:
    vector<vector<int>>ans;
    vector<int>temp;
    void solve(int val,int k,int target ){
        if(target==0 && temp.size()==k){
            ans.push_back(temp);
            return;
        }
        if(val>9 || temp.size()>k || target<0){
            return;
        }
        temp.push_back(val);
        solve(val+1,k,target-val);
        temp.pop_back();
        solve(val+1,k,target);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        solve(1,k,n);
        return ans;
    }
};