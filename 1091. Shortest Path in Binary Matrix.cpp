class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<bool>>vis(n,vector<bool>(n,false));
        queue<pair<int,int>>q;
        // 8 direction for bfs
        int r[8] = {0,0,1,-1,-1,1,1,-1};
        int c[8] = {-1,1,0,0,1,1,-1,-1};
        q.push(make_pair(0,0));
        vis[0][0]  = true;
        int ans = 0;
        if(grid[0][0]==1 || grid[n-1][n-1]==1)
        {
            return -1;
        }
        while(!q.empty())
        {
            ans++;
            int size = q.size();
            while(size--)
            {
                auto temp = q.front();
                q.pop();
                int x = temp.first;
                int y = temp.second;
                if(x==n-1 && y==n-1)
                {
                    return ans;
                }
                // for these x and y we have 8 directions to go
                for(int i=0;i<8;i++)
                {
                    int xx = x+r[i];
                    int yy = y+c[i];
                    if(xx>=0 && yy>=0 && xx<n && yy<n && grid[xx][yy]!=1)
                    {
                        if(vis[xx][yy]==false)
                        {
                            q.push(make_pair(xx,yy));
                            vis[xx][yy] = true;
                        }
                    }
                }
            }
        }
        return -1;
    }
};
