class Solution {
public:
    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {
        vector<vector<int>> adj(n);
         unordered_set<int>getout(restricted.begin(),restricted.end());
   for(auto edge : edges) {
    int u = edge[0];
    int v = edge[1];

    adj[u].push_back(v);
    adj[v].push_back(u);
   }
    vector<int> vis(n, 0);
    queue<int> q;
    int ans= 0;
    q.push(0);
    if(getout.count(0))return -1;
    vis[0] = 1;
    
    while(!q.empty()) {

        int node = q.front();
        q.pop();

        cout << node << " ";

        for(int nei : adj[node]) {

            if(!vis[nei] && !getout.count(nei)) {
                vis[nei] = 1;
                q.push(nei);
            }
        }
        ans++;
    }
    return ans;
    }
};