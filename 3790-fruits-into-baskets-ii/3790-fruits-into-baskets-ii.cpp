class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
       int n =fruits.size();

        vector<bool>vis(n,false);
        int cnt=0;
        for(int i=0;i<fruits.size();i++){
            int l=0;
            bool srini=false;
            while(l<n){
                if(baskets[l]>=fruits[i] && !vis[l]){
                    vis[l]=true;
                    srini=true;
                    break;
                }
                l++;
            }
            if(!srini){
                cnt++;
            }
        }
        return cnt;
    }
};