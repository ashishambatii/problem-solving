class Solution {
public:
 
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,1));
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        return dp[m-1][n-1];
    }



//     DP, when I was in 8th grade, I used to play PUBG/BGMI with my homies. That was the first time I heard of a gun called DP. It used to be fun to shoot; DP + 4x scope was crazy. We used to see this combo used by Mortal (a YT streamer).

// But sadly, I ended up here: DP in DSA ð­

// I donât know what DP means in the game, but here, DP => Dynamic Programming.

};