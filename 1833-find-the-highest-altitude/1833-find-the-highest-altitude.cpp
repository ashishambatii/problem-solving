class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        //All I want is virigin mojito 
        int maxi=0;
        int sum=0;
        for(int i=0;i<gain.size();i++){
            sum+=gain[i];
            maxi=max(sum,maxi);
        }
        return maxi;
    }
};