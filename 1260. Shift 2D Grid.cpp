class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();
        if(k==0)
        {
            return grid;
        }
        
        vector<vector<int>>dp(n,vector<int>(m));
        while(k--)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    if(i==n-1 && j==m-1)
                    {
                        dp[0][0] = grid[i][j];
                    }
                    else if(j==m-1)
                    {
                        dp[i+1][0] = grid[i][j];
                    }
                    else
                    {
                        dp[i][j+1] = grid[i][j];
                    }
                }
            }
            grid = dp;
        }
        return dp;
    }
};
