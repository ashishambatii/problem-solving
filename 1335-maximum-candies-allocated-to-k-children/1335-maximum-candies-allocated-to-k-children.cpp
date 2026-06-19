class Solution {
public:
    bool canwe(vector<int>&candies,int mid,long long k){
        long long ans=0;
        for(int i=0;i<candies.size();i++){
            ans+=candies[i]/mid;
           if(ans>=k)return true;
        }
        return false;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        int l=1;
        int maxi= INT_MIN;
        for(int i=0;i<candies.size();i++){
            maxi=max(candies[i],maxi);
        }
        int r= maxi;
        int ans=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(canwe(candies,mid,k)){
                l=mid+1;
                ans=mid;
            }
            else{
                r=mid-1;
            }
        }
        return ans;
    }
};