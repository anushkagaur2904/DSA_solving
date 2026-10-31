//Find the city with the smallest number of neighbors
//https://leetcode.com/problems/find-the-city-with-the-smallest-number-of-neighbors-at-a-threshold-distance/description/

/*
class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<int>> dist(n,vector<int>(n,INT_MAX));

        for(auto it: edges){
            int u = it[0];
            int v = it[1];
            int wt = it[2];
            dist[u][v] = wt;
            dist[v][u] = wt;
        }

        for(int i=0;i<n;i++){
            dist[i][i]=0;
        }
        
        for(int k=0;k<n;k++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(dist[i][k] == INT_MAX || dist[k][j] == INT_MAX){
                        continue;
                    }
                    dist[i][j] = min(dist[i][j],dist[i][k] + dist[k][j]);
                }
            }
        }

        int countCity = n;
        int cityNo = -1;
        for(int city=0;city<n;city++){
            int count = 0;
            for(int adjCity=0;adjCity<n;adjCity++){
                if(dist[city][adjCity]<=distanceThreshold){
                    count++;
                }
            }
            if(count<=countCity){
                countCity = count;
                cityNo = city;
            }
        }
        return cityNo;
    }
};
*/