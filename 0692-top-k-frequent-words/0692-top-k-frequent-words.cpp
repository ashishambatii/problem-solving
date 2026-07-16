class Solution {
public:
    struct cmp {
        bool operator()(pair<int, string>& a, pair<int, string>& b) {
            if (a.first == b.first)
                return a.second >
                       b.second;      // smaller string gets higher priority
            return a.first < b.first; // higher frequency gets higher priority
        }
    };

    priority_queue<pair<int, string>, vector<pair<int, string>>, cmp> pq;
    vector<string> topKFrequent(vector<string>& words, int k) {

        unordered_map<string, int> mp;
        for (string& word : words) {
            mp[word]++;
        }
        for (auto& it : mp) {
            pq.push({it.second, it.first});
        }
        vector<string> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
