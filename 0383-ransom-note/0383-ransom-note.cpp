class Solution {
public:
    bool canConstruct(string s1, string s2) {
          unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;
        for(int i=0;i<s1.size();i++){
            mp1[s1[i]]++;
        }
        for(int i=0;i<s2.size();i++){
            mp2[s2[i]]++;
        }
        for(auto it : mp1){
     int key=it.first;
     if(it.second>mp2[key])return false;
    if(mp2.find(it.first) == mp2.end()){
        return false;
    }
  
   }
  return true;

    }
};