class Solution {
public:
    vector<vector<int>> reconstructMatrix(int upper, int lower, vector<int>& colsum) {
        vector<vector<int>>dp(2,vector<int>(colsum.size(),0));
        for(int i=0;i<colsum.size();i++)
        {
            if(colsum[i]==0)
            {
                dp[0][i] = 0;
                dp[1][i] = 0;
            }
            else if(colsum[i]==1)
            {
                if(upper>0 || lower>0)
                {
                    if(upper>lower)
                    {
                        upper--;
                        dp[0][i]=1;
                        dp[1][i]=0;
                    }
                    else
                    {
                        lower--;
                        dp[0][i]=0;
                        dp[1][i]=1;
                    }
                }
                else
                {
                    return {};
                }
            }
            else
            {
                if(upper>0 && lower>0)
                {
                    upper--;
                    lower--;
                    dp[0][i]=1;
                    dp[1][i]=1;
                }
                else
                {
                    return {};
                }
            }
        }
        if(upper==0 && lower==0)
        return dp;
        return {};
    }
};
