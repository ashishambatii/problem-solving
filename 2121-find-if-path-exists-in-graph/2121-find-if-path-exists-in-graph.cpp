class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
      vector<vector<int>> adj(n);

for(auto edge : edges) {
    int u = edge[0];
    int v = edge[1];

    adj[u].push_back(v);
    adj[v].push_back(u);   // remove this for a directed graph
}
        vector<bool>vis(n,false);
        queue<int>q;
        q.push(source);
        vis[source]=true;
        while(!q.empty()){
            int p= q.front();
            q.pop();

            for(int i : adj[p]){
                if(!vis[i]){
                    vis[i]=true;
                    q.push(i);
                }
            }
        }
        return vis[destination];
    }
};