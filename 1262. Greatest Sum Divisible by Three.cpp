class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        
        vector<int>dp={0,0,0};
        for(auto a:nums)
        {
            vector<int>temp_dp=dp;
            for(auto x:temp_dp)
            {
                dp[(a+x)%3] = max(dp[(a+x)%3],a+x);
            }
        }
        return dp[0];
    }
};
