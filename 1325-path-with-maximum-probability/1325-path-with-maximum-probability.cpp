class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        //Adjecent list
        vector<vector<pair<int,double>>> adj(n);
        for(int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            double prob = succProb[i];

            adj[u].push_back({v, prob});
            adj[v].push_back({u, prob});
        }
        priority_queue<pair<double,int>>pq;

        vector<double>prob(n,0.0);

        prob[start_node]=1;
        pq.push({1.0,start_node});

        while(!pq.empty()){
            auto[curprob,node]=pq.top();
            pq.pop();

            if(curprob<prob[node]){
                continue;
            }
            if(node==end_node){
              return curprob;
            }
            for(auto  [ i , edgeprob]:adj[node]){
                double newprob = edgeprob*curprob;
                if(newprob>prob[i]){
                    prob[i]=newprob;
                    pq.push({newprob,i});
                }
            }
        }
        return 0.0;
    }
};