class Solution {
public:
    string smallestPalindrome(string s) {
       vector<int>c(26,0);
       for(int i=0;i<s.size();i++){
           c[s[i]-'a']++;
       } 
       
      string front="";
      string back ="";
       for(int i=0;i<26;i++){
            while(c[i]>=2){
                
                      front+=(i+'a');
                      back+=(i+'a');
                      c[i]-=2;
                
            }
           
       }
       for(int i=0;i<26;i++){
        if(c[i]==1)
        front+=(i+'a');
       }
        string ans="";
            reverse(back.begin(),back.end());
            ans+=front;
            ans+=back;
            return ans;
    }
};