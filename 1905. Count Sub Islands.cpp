class Solution {
public:
    void solve(vector<vector<int>>& grid1, vector<vector<int>>& grid2,int i,int j,int n,int m,int& check){
        if(i<0 || i>=n || j<0 || j>=m || grid2[i][j]==0){
            return ;
        }
        if(grid1[i][j]==0){
            check = 0;
            return;
        }
        grid2[i][j] = 0;
        solve(grid1,grid2,i+1,j,n,m,check);
        solve(grid1,grid2,i-1,j,n,m,check);
        solve(grid1,grid2,i,j+1,n,m,check);
        solve(grid1,grid2,i,j-1,n,m,check);
        
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int n = grid1.size();
        int m = grid1[0].size();
        int count =0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid2[i][j]==1){
                    int check = 1;
                    solve(grid1,grid2,i,j,n,m,check);
                    if(check==1){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};
