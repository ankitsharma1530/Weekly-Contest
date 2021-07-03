int dp[100001][2];
int dfs(vector<int>& nums,int ind,bool skip){
    if(ind>=nums.size()){
        return 0;
    }
    if(dp[ind][skip]!=-1){
        return dp[ind][skip];
    }
    int ans ;
    if(skip){
        ans = nums[ind]+dfs(nums,ind+1,false);
    }
    else{
        ans = min(nums[ind]+dfs(nums,ind+1,false),
                            dfs(nums,ind+1,true));
    }
    return dp[ind][skip] = ans;
}
int solve(vector<int>& nums) {
    if(nums.size()==0){
        return 0;
    }
    memset(dp,-1,sizeof(dp));
    return min(nums[0]+dfs(nums,1,false),dfs(nums,1,true));
}
