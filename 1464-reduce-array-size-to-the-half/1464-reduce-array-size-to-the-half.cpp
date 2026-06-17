class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto it : mp){
            pq.push({it.second,it.first});
        }
        int n=arr.size();
        int size=0;
        int cnt=0;
        while(!pq.empty() && size<n/2 ){
            size+=pq.top().first;
            cnt++;
            pq.pop();
            
        }
        return cnt;
    }
};