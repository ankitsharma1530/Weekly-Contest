class Solution {
public:
    int dp[101][101];
    int nearestExit(vector<vector<char>>& maze, vector<int>& e) {
        int n = maze.size();
        int m = maze[0].size();
        // * stop
        // # start
        maze[e[0]][e[1]] = '#';
        for(int i=0;i<n;i++){
            if(maze[i][0]=='.'){
                maze[i][0] = '*';
            }
            if(maze[i][m-1]=='.'){
                maze[i][m-1] = '*';
            }
        }
        for(int j=0;j<m;j++){
            if(maze[0][j]=='.'){
                maze[0][j] = '*';
            }
            if(maze[n-1][j]=='.'){
                maze[n-1][j] = '*';
            }
        }
        queue<pair<int, int>> q;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (maze[i][j] == '#') {
                    dp[i][j] = 0;
                    q.push({i, j});
                } else {
                    dp[i][j] = 1e9;
                }
            }
        }
        while (q.size()) {
            auto [x, y] = q.front();
            q.pop();
            if (maze[x][y] == '*') 
                return dp[x][y];
            int dx[4] = {-1, 0, 1, 0};
            int dy[4] = {0, 1, 0, -1};
            for (int k = 0; k < 4; k++) {
                int nx = x + dx[k];
                int ny = y + dy[k];
                if (nx < 0 || nx >= n || ny < 0 || ny >= m || maze[nx][ny] == '+') continue;
                if (dp[nx][ny] > 1 + dp[x][y]) {
                    dp[nx][ny] = 1 + dp[x][y];
                    q.emplace(nx, ny);
                }
            }
        }
        return -1;
        
    }
};
