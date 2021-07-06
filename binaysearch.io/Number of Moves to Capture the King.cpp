int solve(vector<vector<int>>& board) {
    int dx[8] = {2,1,-2,-1,2,1,-2,-1};
    int dy[8] = {1,2,-1,-2,-1,-2,1,2};
    queue<pair<int,pair<int,int>>>q;
    // if any cell is already visited by other knight then the current knight will gonna be ignore him
    // why ?
    // A knight is a knight and if one has been there before no need for   others to follow in its footsteps and give less optimal solution.
    int n = board.size();
    int m = board[0].size();
    vector<vector<bool>>vis(n,vector<bool>(m,false));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(board[i][j]==1){
                q.push({0,{i,j}});
                vis[i][j] = true;
            }
        }
    }
    while(!q.empty()){
        int size = q.size();
        while(size--){
            auto node = q.front();
            q.pop();
            int dis = node.first;
            if(board[node.second.first][node.second.second]==2){
                return dis;
            }
            for(int i=0;i<8;i++){
                int x = node.second.first+dx[i];
                int y = node.second.second+dy[i];
                if(x>=0 and x<n and y>=0 and y<m and vis[x][y]==false){
                    q.push({dis+1,{x,y}});
                    vis[x][y] = true;
                }
            }
        }
    }
    return -1;
}
