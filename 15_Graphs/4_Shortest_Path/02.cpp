//Shortest Path in DAG
//https://www.geeksforgeeks.org/problems/shortest-path-in-directed-acyclic-graph/1

/*
class Solution {
  public:

    void topoSort(int node,
                  vector<vector<pair<int,int>>>& adj,
                  vector<int>& vis,
                  stack<int>& st) {

        vis[node] = 1;

        for(auto it : adj[node]) {
            int v = it.first;

            if(!vis[v]) {
                topoSort(v, adj, vis, st);
            }
        }

        st.push(node);
    }


    vector<int> shortestPath(int V, vector<vector<int>>& edges) {

        vector<vector<pair<int,int>>> adj(V);

        for(auto &it : edges) {
            int u = it[0];
            int v = it[1];
            int wt = it[2];

            adj[u].push_back({v, wt});
        }

        // Topological sort
        vector<int> vis(V, 0);
        stack<int> st;

        for(int i = 0; i < V; i++) {
            if(!vis[i]) {
                topoSort(i, adj, vis, st);
            }
        }

        // Distance array
        vector<int> dist(V, INT_MAX);

        dist[0] = 0;

        // Relax edges in topological order
        while(!st.empty()) {

            int node = st.top();
            st.pop();

            // IMPORTANT: node must be reachable
            if(dist[node] == INT_MAX) {
                continue;
            }

            for(auto it : adj[node]) {

                int v = it.first;
                int wt = it.second;

                if(dist[node] + wt < dist[v]) {
                    dist[v] = dist[node] + wt;
                }
            }
        }

        // Convert unreachable nodes
        for(int i = 0; i < V; i++) {
            if(dist[i] == INT_MAX) {
                dist[i] = -1;
            }
        }

        return dist;
    }
};
*/