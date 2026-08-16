class Solution {
public:
    int elevatorRequests(int n, vector<int>& r) {
        int prev=0;
        int sum=0;
        for(int i=0;i<r.size();i++){
            sum+=abs(prev-r[i]);
            prev=r[i];
        }
        return sum;
    }
};