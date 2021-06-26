class Solution {
public:
    // time complexity - > O(n)
    // check leetcode notes and notebook for theory
    long long dp[100001][2];
    long long solve(vector<int>& nums, int ind, bool sign){
        if(ind>=nums.size()){
            return 0;
        }
        if(dp[ind][sign]!=-1){
            return dp[ind][sign];
        }
        long long curr_element = nums[ind];
        
        // if we had to take this in the subtraction case
        if(sign==false){
            curr_element*=-1;
        }
        return dp[ind][sign] = max(curr_element+solve(nums,ind+1,!(sign)),solve(nums,ind+1,sign));
    }
    long long maxAlternatingSum(vector<int>& nums) {
        
        memset(dp,-1,sizeof(dp));
        // initially we call from 0th index with +ve sign
        return solve(nums,0,true);
    }
};
