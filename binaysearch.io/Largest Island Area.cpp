int dfs(vector<vector<int>>& matrix, int i,int j,int n,int m){
    if(i<0 || i>=n || j<0 || j>=m || matrix[i][j]==0 || matrix[i][j]==2){
        return 0;
    }
    int count = 1;
    matrix[i][j] = 2;
    count+=dfs(matrix,i+1,j,n,m);
    count+=dfs(matrix,i-1,j,n,m);
    count+=dfs(matrix,i,j+1,n,m);
    count+=dfs(matrix,i,j-1,n,m);
    return count;
}
int solve(vector<vector<int>>& matrix) {
    int area = 0;
    int n = matrix.size();
    int m = matrix[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==1){
                int c = dfs(matrix,i,j,n,m);
                area = max(area,c);
            }
        }
    }
    return area;
}
