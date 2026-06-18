class Solution {
public:
    bool checkString(string s) {
        string cpy="";
        cpy+=s;
        sort(cpy.begin(),cpy.end());
        for(int i=0;i<s.size();i++){
            if(cpy[i]!=s[i])return false;
        }
        return true;
    }
};