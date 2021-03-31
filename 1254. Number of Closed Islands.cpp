class Solution {
public:
    void solve(vector<vector<int>>& grid, int i, int j,int n,int m)
    {
        if(i<0 || i>=n || j<0 || j>=m || grid[i][j]==1)
        {
            return;
        }
        grid[i][j] = 1; // mark it as visited
        solve(grid,i+1,j,n,m);
        solve(grid,i-1,j,n,m);
        solve(grid,i,j-1,n,m);
        solve(grid,i,j+1,n,m);
    }
    int closedIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        // first fill the boundaries without counting them in answer 
        for(int i=0;i<n;i++)
        {
            solve(grid,i,0,n,m);
            solve(grid,i,m-1,n,m);
        }
        for(int j=0;j<m;j++)
        {
            solve(grid,0,j,n,m);
            solve(grid,n-1,j,n,m);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==0)
                {
                    solve(grid,i,j,n,m);
                    count++;
                }
            }
        }
        return count;
    }
};
