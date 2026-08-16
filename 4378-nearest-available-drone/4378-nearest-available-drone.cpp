class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int mini=INT_MAX;
        int ind = INT_MAX;
        for(int i=0;i<drones.size();i++){
            int a = drones[i][0];
            int b = drones[i][1];
            int c = abs(a-target[0])+abs(b-target[1]);
            if(c<=drones[i][2]){
                if(c<mini){
                    ind=i;
                    mini=c;
                }
            }
        }
        if(ind==INT_MAX)return -1;
        return ind;
    }
};