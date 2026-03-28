#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void dfs(int u, int parent, vector<vector<int>> &adj,
             vector<int> &vis, vector<int> &tin, vector<int> &low,
             vector<int> &mark, int &timer) {
        
        vis[u] = 1;
        tin[u] = low[u] = timer++;
        int children = 0;

        for(auto v : adj[u]) {
            if(v == parent) continue;

            if(!vis[v]) {
                dfs(v, u, adj, vis, tin, low, mark, timer);
                low[u] = min(low[u], low[v]);

                if(low[v] >= tin[u] && parent != -1)
                    mark[u] = 1;

                children++;
            } else {
                low[u] = min(low[u], tin[v]);
            }
        }

        if(parent == -1 && children > 1)
            mark[u] = 1;
    }

    vector<int> articulationPoints(int V, vector<vector<int>>& edges) {
        
        vector<vector<int>> adj(V);

        for(auto &e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        vector<int> vis(V, 0), tin(V), low(V), mark(V, 0);
        int timer = 0;

        for(int i = 0; i < V; i++) {
            if(!vis[i]) {
                dfs(i, -1, adj, vis, tin, low, mark, timer);
            }
        }

        vector<int> ans;

        for(int i = 0; i < V; i++) {
            if(mark[i]) ans.push_back(i);
        }

        if(ans.empty()) return {-1};

        return ans;
    }
};
