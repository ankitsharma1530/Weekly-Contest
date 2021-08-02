const int mod = 1000000007;
class Solution {
public:
    int dp[100001][4];
    int dfs(vector<int>& nums,int ind,int prev){
        if(ind>=nums.size()){
            if(prev==2){
                return 1;
            }
            return 0;
        }
        if(dp[ind][prev+1]!=-1){
            return dp[ind][prev+1];
        }
        int ans = 0;
        // nums[i]==prev -> the following character will be the same as prev one
        // nums[i]==prev+1 -> condn of our question
                // 0 can be followed by 1
                // 1 can be followed by 2
        
        // include
        if(nums[ind]==prev || nums[ind]==prev+1){
            ans+=dfs(nums,ind+1,nums[ind])%mod;
        }
        //exclude
        ans+=dfs(nums,ind+1,prev)%mod;
        return dp[ind][prev+1] = ans%mod;
    }
    int countSpecialSubsequences(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        // start from 0 and its previous will be -1
        return dfs(nums,0,-1);
    }
};
