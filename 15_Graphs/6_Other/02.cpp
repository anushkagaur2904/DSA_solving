//Articulation Point in graph
//https://www.geeksforgeeks.org/problems/articulation-point2616/1

/*
class Solution {
  public:
    int timer = 0;
    
    void dfs(int node,int parent,vector<int>& vis,int t_in[],int low[],vector<int>& mark, vector<int> adj[]){
        vis[node]=1;
        t_in[node] = low[node] = timer;
        timer++;
        int child=0;//for starting point
        
        for(auto it: adj[node]){
            if(it==parent) continue;
            if(!vis[it]){
                dfs(it,node,vis,t_in,low,mark,adj);
                low[node] = min(low[node],low[it]);
                if(low[it]>=t_in[node] && parent!=-1){
                    mark[node]=1;
                }
                child++;
            }
            else{
                low[node] = min(low[node],t_in[it]);
            }
        }
        if(child>1 && parent==-1){
            mark[node]=1;
        }
    }
    vector<int> articulationPoints(int V, vector<vector<int>>& edges) {
        // code here
        vector<int> adj[V];
        for(auto it:edges){
            int u = it[0];
            int v = it[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<int> vis(V,0);
        int t_in[V];
        int low[V];
        vector<int> mark(V,0);
        
        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfs(i,-1,vis,t_in,low,mark,adj);
            }
        }
        
        vector<int> ans;
        for(int i=0;i<V;i++){
            if(mark[i]==1){
                ans.push_back(i);
            }
        }
        
        if(ans.size()==0) return{-1};
        return ans;
    }
};
*/