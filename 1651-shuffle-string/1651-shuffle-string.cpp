class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
       vector<pair<int,char>>word(s.size());
       for(int i=0;i<s.size();i++){
        word[i].first=indices[i];
        word[i].second=s[i];
       } 
       sort(word.begin(),word.end());
       string ans="";
       for(int i=0;i<s.size();i++){
        ans+=word[i].second;
       }
       return ans;
    }
};