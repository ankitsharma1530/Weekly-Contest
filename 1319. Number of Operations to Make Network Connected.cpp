class Solution {
public:
    void solve(vector<vector<int>>& adj, vector<bool>& vis, int node)
    {
        if(vis[node]==true)
        {
            return;
        }
        vis[node]=true;
        for(auto x:adj[node])
        {
            solve(adj,vis,x);
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        int size = connections.size();
         if(size<n-1)
         {
            return -1;
        }
        vector<vector<int>>adj(n);
        for(auto x:connections)
        {
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        vector<bool>vis(n,false);
        int count = 0;
        for(int i=0;i<n;i++)
        {
            if(vis[i]==false)
            {
                count++;
                solve(adj,vis,i);
            }
        }
        return count-1;
    }
};
