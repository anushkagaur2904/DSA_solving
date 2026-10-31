//Bridges in Graph
//Using Tarjan's Algorithm of time in and low time
//https://leetcode.com/problems/critical-connections-in-a-network/description/

/*
class Solution {
public:
    int timer = 1;
    
    void dfs(int node,int parent,vector<int>& vis,vector<int> adj[],int t_in[],int low[],vector<vector<int>>& bridges){
        vis[node]=1;
        t_in[node]=low[node]=timer;
        timer++;

        for(auto it: adj[node]){
            if(it == parent) continue;
            if(vis[it] == 0){//not visited
                dfs(it,node,vis,adj,t_in,low,bridges);
                low[node] = min(low[node],low[it]);
                //node----it check for bridge
                if(low[it]>t_in[node]){
                    bridges.push_back({it,node});
                }
            }
            else{//visited hai toh bas low update krdo
                low[node] = min(low[node],low[it]);
            }
        }
    }
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<int> adj[n];
        for(auto it:connections){
            int u = it[0];
            int v = it[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> vis(n,0);
        int t_in[n];
        int low[n];
        vector<vector<int>> bridges;
        dfs(0,-1,vis,adj,t_in,low,bridges);
        return bridges;
    }
};
*/