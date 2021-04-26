class Solution {
public:
    void solve(vector<vector<int>>& grid,int i,int j,int n, int m)
    {
        if(i<0 || i>=n || j<0 || j>=m || grid[i][j]==2 || grid[i][j]==0)
        {
            return;
        }
        grid[i][j] = 2;
        solve(grid,i+1,j,n,m);
        solve(grid,i-1,j,n,m);
        solve(grid,i,j-1,n,m);
        solve(grid,i,j+1,n,m);
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count =0;
        for(int i=0;i<n;i++)
        {
            if(grid[i][0]==1)
            {
                solve(grid,i,0,n,m);
            }
            if(grid[i][m-1]==1)
            {
                solve(grid,i,m-1,n,m);
            }
        }
        for(int i=0;i<m;i++)
        {
            if(grid[0][i]==1)
            {
                solve(grid,0,i,n,m);
            }
            if(grid[n-1][i]==1)
            {
                solve(grid,n-1,i,n,m);
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    count++;
                }
            }
        }
        return count;
    }
};
