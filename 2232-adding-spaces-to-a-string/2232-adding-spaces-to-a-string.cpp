class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int j =-1;
        int n= spaces.size();
        int  k=0;
        string ans ="";
        for(int i=0;i<s.size() ;i++){
              if( k<n && i==spaces[k] ){
                 ans+=' ';
                 ans+=s[i];
                 k++;
              }
              else
              ans+=s[i];
        }
        return ans;
    }
};