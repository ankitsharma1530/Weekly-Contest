int dp[100001];
int dfs(int n){
    if(n==0){
        return 0;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    int count = INT_MAX;
    for(int i=1;i*i<=n;i++){
        count = min(count,1+dfs(n-i*i));
    }
    return dp[n] = count;
}
int solve(int n) {
   memset(dp,-1,sizeof(dp));
   return dfs(n); 
}
