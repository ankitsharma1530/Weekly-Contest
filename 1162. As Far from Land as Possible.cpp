class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<bool>>vis(n,vector<bool>(n,false));
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                    q.push(make_pair(i,j));
                    vis[i][j] = true;
                }
            }
        }
        if(q.size()==0 || q.size()==n*n)
        {
            return -1;
        }
        int l = -1;
        int r[] = {-1,1,0,0};
        int c[] = {0,0,-1,1};
        while(!q.empty())
        {
            int size = q.size();
            l++;
            while(size--)
            {
                pair<int,int> curr = q.front();
                q.pop();
                int x = curr.first;
                int y = curr.second;
                for(int i=0;i<4;i++)
                {
                    int nx = x+r[i];
                    int ny = y+c[i];
                    if(nx<n&&nx>=0&&ny<n&&ny>=0)
                    {
                    if(grid[nx][ny]!=1)
                    {
                        if(vis[nx][ny]==false)
                        {
                            q.push(make_pair(nx,ny));
                            vis[nx][ny] = true;
                        }
                    }
                    }
                }
            }
        }
        return l;
    }
};
