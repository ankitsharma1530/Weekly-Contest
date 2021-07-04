int find(int node,vector<int>&par){
    if(node==par[node]){
        return node;
    }
    return find(par[node],par);
}
vector<vector<int>> solve(vector<vector<int>>& graph) {
    int n = graph.size();
    vector<vector<int>>dp(n,vector<int>(n,0));
    
    // dsu
    vector<int>par(n);
    for(int i=0;i<n;i++){
        par[i] = i;
    }
    for(int i=0;i<n;i++){
        for(auto x:graph[i]){
            int par1 = find(i,par);
            int par2 = find(x,par);
            if(par1!=par2){
                par[par2] = par1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int p1 = find(i,par);
            int p2 = find(j,par);
            if(p1==p2){
                dp[i][j]=1;
            }
        }
    }
    return dp;
}
