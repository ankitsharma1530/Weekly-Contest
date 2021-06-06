class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size();
        for(int i=0;i<4;i++){
            vector<vector<int>>dp(n,vector<int>(n));
            for(int x=0;x<n;x++){
                for(int y=0;y<n;y++){
                    dp[x][y] = mat[y][n-x-1];
                }
            }
            bool flag = true;
            for(int a=0;a<n;a++){
                for(int b=0;b<n;b++){
                    if(dp[a][b]!=target[a][b]){
                        // cout<<dp[a][b]<<" ";
                        flag = false;
                    }
                }
                // cout<<endl;
            }
            if(flag){
                return true;
            }
            mat = dp;
        }
        return false;
    }
};
