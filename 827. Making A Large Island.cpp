/*

class Solution {
public:
    // time complexity of this navie approach -> O(n*m*n*m)
    int dfs(vector<vector<int>>& grid,int i,int j,int n,int m,vector<vector<bool>>&vis){
        if(i<0 || i>=n || j<0 || j>=m || vis[i][j]==true || grid[i][j]==0){
            return 0;
        }
        int ans = 1;
        vis[i][j] = true;
        ans+=dfs(grid,i+1,j,n,m,vis);
        ans+=dfs(grid,i,j+1,n,m,vis);
        ans+=dfs(grid,i,j-1,n,m,vis);
        ans+=dfs(grid,i-1,j,n,m,vis);
        return ans;
        
    }
    int largestIsland(vector<vector<int>>& grid) {
        vector<pair<int,int>>v;
        int n = grid.size();
        int m = grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==0)
                    v.push_back({i,j});
            }
        }
        if(v.size()==n*m){
            return 1;
        }
        if(v.size()==0){
            return n*m;
        }
        int res = 0;
        for(auto x:v){
            vector<vector<bool>>vis(n,vector<bool>(m));
            grid[x.first][x.second]=1;
            res = max(res,dfs(grid,x.first,x.second,n,m,vis));
            grid[x.first][x.second]=0;
        }
        return res;
    }
};


*/


class Solution{
  public:
    void dfs(vector<vector<int>>& grid,int i,int j,int n,int m,int k,
             unordered_map<int,int>& ump){
        // out of bound
        if(i<0 || i>=n || j<0 || j>=m || grid[i][j]!=1){
            return;
        }
        ump[k]++;
        grid[i][j] = k;
        dfs(grid,i+1,j,n,m,k,ump);
        dfs(grid,i-1,j,n,m,k,ump);
        dfs(grid,i,j+1,n,m,k,ump);
        dfs(grid,i,j-1,n,m,k,ump);
    }
    int largestIsland(vector<vector<int>>& grid){
        // first i will find the size of each component
        // give different key for different component in matrix during dfs
        
        int n = grid.size();
        int m = grid[0].size();
        unordered_map<int,int>ump; // store info about different components
        int k = 2;
        // why we initialise k = 2
        // as because 1 is alreaady in the scenario 
        
        
        int area = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    dfs(grid,i,j,n,m,k,ump);
            // We have to find the largest island in case there are no 0's in the grid
                    area = max(area,ump[k]);
                    k++;
                }
            }
        }
        
        vector<pair<int,int>>q;
        //mark those element who have zero
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==0){
                    q.push_back({i,j});
                }
            }
        }
        
        int dx[4] = {0,0,-1,1};
        int dy[4] = {-1,1,0,0};
        for(auto x:q){
            unordered_set<int>st;
            int temp = 1;
            for(int i=0;i<4;i++){
                int xx = x.first+dx[i];
                int yy = x.second+dy[i];
                if(xx<0 || xx>=n || yy<0 || yy>=m){
                    continue;
                }
                if(grid[xx][yy]==0){
                    continue;
                }
                if(st.find(grid[xx][yy])==st.end()){
                    temp+=ump[grid[xx][yy]];
                    st.insert(grid[xx][yy]);
                }
            }
            area = max(area,temp);
        }
        return area;
    }
};
