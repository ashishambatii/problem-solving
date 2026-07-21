class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        string ans="";
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==x)cnt++;
            else
            ans+=s[i];
        }
        for(int i=0;i<cnt;i++){
            ans+=x;
        }
        return ans;
        
    }
};