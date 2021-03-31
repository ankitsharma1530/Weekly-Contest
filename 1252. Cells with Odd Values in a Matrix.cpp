class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>>dp(m,vector<int>(n,0));
        for(auto x:indices)
        {
            for(int i=0;i<m;i++)
            {
                dp[i][x[1]]++;
            }
            for(int i=0;i<n;i++)
            {
                dp[x[0]][i]++;
            }
        }
        int count = 0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(dp[i][j]%2!=0)
                {
                    count++;
                }
            }
        }
        return count;
    }
};
