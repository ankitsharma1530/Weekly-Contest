class Solution {
public:
    // recursion will give us TLE
    // hence we will memoize
    int dp[501][501];
    long long int solve(int curr_pos, int steps_remain_with_us, int right_limit)
    {
        // base condn for recursion
        if(curr_pos<0 || curr_pos>=right_limit)
        {
            return 0;
        }
        if(steps_remain_with_us<0)
        {
            return 0;
        }
        if(steps_remain_with_us==0 && curr_pos==0)
        {
            return 1;
        }
        if(dp[curr_pos][steps_remain_with_us]!=-1)
        {
            return dp[curr_pos][steps_remain_with_us];
        }
        
        long long int ans=solve(curr_pos-1,steps_remain_with_us-1,right_limit)+solve(curr_pos,steps_remain_with_us-1,right_limit)+solve(curr_pos+1,steps_remain_with_us-1,right_limit);
        dp[curr_pos][steps_remain_with_us]=ans%1000000007;
        return dp[curr_pos][steps_remain_with_us];
    }
    int numWays(int steps, int arrLen) {
        memset(dp,-1,sizeof(dp));
        return solve(0,steps,min(steps+1,arrLen))%1000000007;
    }
};
