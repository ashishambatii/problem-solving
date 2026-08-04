class Solution {
public:
    string findLongestWord(string s, vector<string>& dictionary) {
       int m=s.size();
       int maxlen=INT_MIN;
       string ans ="";
        for(int i=0;i<dictionary.size();i++){
            int n=dictionary[i].size();
             int j=0;
             int k=0;
             int cnt=0;
            while(j<n &&k<m ){
                if(s[k]==dictionary[i][j]){
                    cnt++;
                    j++;
                }
                k++;
            }
            if(cnt==n){
                if(maxlen<cnt){
                    maxlen=cnt;
                    ans=dictionary[i];
                }
                else if(maxlen==cnt){
                    ans=min(ans,dictionary[i]);
                }
            }
        }
        return ans;
    }
};