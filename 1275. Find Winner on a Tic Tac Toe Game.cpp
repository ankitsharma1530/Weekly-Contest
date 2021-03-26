class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        vector<vector<int>>dp(3,vector<int>(3,0));
        int check=0;
        for(auto x:moves)
        {
            if(check%2==0)
                dp[x[0]][x[1]]=1;
            else
                dp[x[0]][x[1]]=-1;
            check++;
        }
        for(int i=0;i<3;i++)
        {
            if(dp[i][0]==1&&dp[i][1]==1&&dp[i][2]==1)
            {
                return "A";
            }
            if(dp[i][0]==-1&&dp[i][1]==-1&&dp[i][2]==-1)
            {
                return "B";
            }
        }
        for(int i=0;i<3;i++)
        {
            if(dp[0][i]==1&&dp[1][i]==1&&dp[2][i]==1)
            {
                return "A";
            }
            if(dp[0][i]==-1&&dp[1][i]==-1&&dp[2][i]==-1)
            {
                return "B";
            }
        }
        if(dp[0][0]==1&&dp[1][1]==1&&dp[2][2]==1)
        {
            return "A";
        }
        if(dp[0][0]==-1&&dp[1][1]==-1&&dp[2][2]==-1)
        {
            return "B";
        }
        if(dp[0][2]==1&&dp[1][1]==1&&dp[2][0]==1)
        {
            return "A";
        }
        if(dp[0][2]==-1&&dp[1][1]==-1&&dp[2][0]==-1)
        {
            return "B";
        }
        if(moves.size()==9)
        {
            return "Draw";
        }
        else
        {
            return "Pending";
        }
    }
};
