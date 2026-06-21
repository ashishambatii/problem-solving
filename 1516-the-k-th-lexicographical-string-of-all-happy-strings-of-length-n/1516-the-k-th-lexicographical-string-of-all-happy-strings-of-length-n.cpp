class Solution {
public:
    vector<string>ans;
    string temp="";
    void solve(int n){
      if(temp.size()==n){
         ans.push_back(temp);
         return;
      }
      for(char ch='a';ch<='c';ch++){
        if(!temp.empty()&& temp.back()==ch){
            continue;
        }
        temp.push_back(ch);
        solve(n);
        temp.pop_back();
      }
    }
    string getHappyString(int n, int k) {
          solve(n);
        if(k>ans.size()){
            return "";
        }
        return ans[k-1];
    }
};