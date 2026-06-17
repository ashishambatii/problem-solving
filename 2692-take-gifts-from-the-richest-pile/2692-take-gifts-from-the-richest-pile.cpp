class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq;
         for(int j=0;j<gifts.size();j++){
                pq.push(gifts[j]);
            }
        for(int i=0;i<k;i++){
          int a =floor(sqrt(pq.top()));
          pq.pop();
          pq.push(a); 
        }
        long long ans=0;
        while(!pq.empty()){
            ans+=pq.top();
            pq.pop();
        }
        return ans;
    }
};