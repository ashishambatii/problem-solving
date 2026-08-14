class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
      vector<string>ans;
      //all the credit goes to srinu bhaai
        for(int i=0;i<words.size();i++){
             unordered_map<char,char>mp;
            vector<int>seen(256);
            bool flag=true;
            for(int j=0;j<words[i].size();j++){
                if (mp.find(words[i][j]) != mp.end()) {
                if (mp[words[i][j]] != pattern[j]){
                    flag=false;
                    break;
                }
            } else {
                if (!seen[pattern[j]]) {
                    mp[words[i][j]] = pattern[j];
                    seen[pattern[j]] = 1;
                } else{
                    flag=false;
                    break;
                }
            }
            }
            if(flag){
              ans.push_back(words[i]);
            }

        }
        return ans;
    }
};