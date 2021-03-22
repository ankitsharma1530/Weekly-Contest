// DFS SOLUTION
class Solution {
public:
    void dfs(vector<vector<int>>& adj, vector<bool>& vis, int node)
    {
        if(vis[node]==true)
        {
            return;
        }
        vis[node]=true;
        for(auto x:adj[node])
        {
            dfs(adj,vis,x);
        }
    }
    bool canReach(vector<int>& arr, int start) {
        int n = arr.size();
        // indexed graph
        vector<vector<int>>adj(n);
        unordered_set<int>ind;
        for(int i=0;i<n;i++)
        {
            if(i-arr[i]>=0)
            {
                adj[i].push_back(i-arr[i]);
            }
            if(i+arr[i]<n)
            {
                adj[i].push_back(i+arr[i]);
            }
            if(arr[i]==0)
            {
                ind.insert(i);
            }
        }
        vector<bool>vis(n);
        dfs(adj,vis,start);
        for(auto x:ind)
        {
            if(vis[x]==true)
            {
                return true;
            }
        }
        return false;
        
    }
};

// BFS SOLUTION
class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        int n=arr.size();
        if(arr[start]==0) 
          return true;
        vector<bool> visited(n, false);
        queue<int> q;
        q.push(start);
        while(!q.empty()){
            int idx=q.front();
            q.pop();
            if(arr[idx]==0) 
              return true;
            if(visited[idx]) 
              continue;
            visited[idx]=true;
            if(arr[idx]+idx < n) q.push(arr[idx]+idx);
            if(idx-arr[idx] >= 0) q.push(idx-arr[idx]);
        }
        return false;
    }
};
