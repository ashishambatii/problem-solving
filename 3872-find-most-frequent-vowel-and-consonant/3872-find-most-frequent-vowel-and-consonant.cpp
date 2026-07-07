class Solution {
public:
   bool isvow(char c){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
        return true;
    }
    return false;
   }
    int maxFreqSum(string s) {
        vector<int>vows(26,0);
        vector<int>cons(26,0);
        for(int i=0;i<s.size();i++){
            if(isvow(s[i])){
                vows[s[i]-'a']++;
            }
            else{
                cons[s[i]-'a']++;
            }
        }
        int consmax=0;
        int vowsmax=0;
        for(int i=0;i<26;i++){
            
            vowsmax=max(vowsmax,vows[i]);
            consmax=max(consmax,cons[i]);
        }
        return vowsmax+consmax;

    }
};