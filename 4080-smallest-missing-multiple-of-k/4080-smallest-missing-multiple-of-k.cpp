class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
    
        for(int i=1;i<=101;i++){
            if(find(begin(nums), end(nums),k*i) == end(nums)){
                return i*k;
            }
        }
        return -1;
    }
};