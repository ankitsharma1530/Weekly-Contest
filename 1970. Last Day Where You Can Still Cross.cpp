class Solution {
public:
    int latestDayToCross(int row, int col, vector<vector<int>>& cells) {
        // easy BFS + BS
        int l = 0;
        int h = cells.size()-1;
        int ans = 0;
        while(l<=h){
            int mid = l+(h-l)/2;
            if(can_reach(cells,row,col,mid)){
                ans = mid;
                l = mid+1;
            }
            else{
                h = mid-1;
            }
        }
        return ans+1;
    }
    
    bool can_reach(vector<vector<int>>& cells, int row,int col,int days){
        vector<vector<int>>dp(row,vector<int>(col,1));
        for(int i=0;i<=days;i++){
            int x = cells[i][0]-1;
            int y = cells[i][1]-1;
            dp[x][y] = 0;
        }
        queue<pair<int,int>>q;
        for(int i=0;i<col;i++){
            if(dp[0][i]==1){
                dp[0][i] = 0;
                q.push({0,i});
            }
        }
        int dx[4] = {0,0,-1,1};
        int dy[4] = {-1,1,0,0};
        while(!q.empty()){
            int size = q.size();
            while(size--){
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                if(x==row-1){
                    return true;
                }
                for(int i=0;i<4;i++){
                    int xx = x+dx[i];
                    int yy = y+dy[i];
                    if(xx>=0 and xx<row and yy>=0 and yy<col){
                        if(dp[xx][yy]==1){
                            q.push({xx,yy});
                            dp[xx][yy] = 0;
                        }
                    }
                }
            }
        }
        return false;
    }
    
};
