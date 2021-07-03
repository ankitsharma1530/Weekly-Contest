void dfs(vector<vector<string>>& matrix,int r,int c,int n,int m,string same,string target){
    if(r<0 || r>=n || c<0 || c>=m || matrix[r][c]!=same){
        return;
    }
    matrix[r][c] = target;
    dfs(matrix,r+1,c,n,m,same,target);
    dfs(matrix,r-1,c,n,m,same,target);
    dfs(matrix,r,c+1,n,m,same,target);
    dfs(matrix,r,c-1,n,m,same,target);
}
vector<vector<string>> solve(vector<vector<string>>& matrix, int r, int c, string target) {
    int n = matrix.size();
    int m = matrix[0].size();
    string same = matrix[r][c];
    if(same==target){
        return matrix;
    }
    dfs(matrix,r,c,n,m,same,target);
    return matrix;
}
