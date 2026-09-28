class Solution {
public:
    int minLengthAfterRemovals(string s) {
       int acnt =0;
       int bcnt =0;
       for(int i=0;i<s.length();i++){
        if(s[i]=='a')acnt++;
        else
        bcnt++;
       }  
       return abs(acnt-bcnt);
    }
};