class Solution {
public:
    int minSideJumps(vector<int>& obstacles) {
        int n = obstacles.size();
        vector<vector<int>>dp(3,vector<int>(n,0));
        for(int i=1;i<n-1;i++)
        {
            dp[i][obstacles[i]-1] = 1;
        }
        int j=0;
        int jumps = 0;
        int i=1;
        while(j<n-1)
        {
            if(dp[i][j+1]==0)
            {
                
            }
        }
    }
};
