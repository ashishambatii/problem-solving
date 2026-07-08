class Solution {
public:
    int kthFactor(int n, int k) {
        // easy
        vector<int>factors;
        if(n<k)return -1;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                factors.push_back(i);
            }
        }
        if(factors.size()<k)return -1;
        return factors[k-1];
    }
};