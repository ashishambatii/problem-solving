class Solution {
public:
     int ans=0;
     void solve(vector<int>&freq){
        for(int i=0;i<26;i++){
            if(freq[i]==0)continue;
            ans++;
            freq[i]--;
            solve(freq);
            freq[i]++;
        }
     }
    int numTilePossibilities(string tiles) {
       int n=tiles.size();
       vector<int>freq(26,0);
       for(int i=0;i<n;i++){
           freq[tiles[i]-'A']++;
       }
       solve(freq);
       return ans;

    }
};