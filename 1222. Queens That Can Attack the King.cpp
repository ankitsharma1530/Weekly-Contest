class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        // int count = 0;
        int x = king[0];
        int y = king[1];
        vector<vector<int>>dp(8,vector<int>(8));
        vector<vector<int>>res;
        for(auto queen:queens)
        {
            dp[queen[0]][queen[1]]=1;
        }
        // check for up
        if(x-1>=0)
        {
            int t = x-1;
            while(t>=0)
            {
                if(dp[t][y]==1)
                {
                    res.push_back({t,y});
                    break;
                }
                t--;
            }
        }
        // down
        if(x+1<8)
        {
            int t = x+1;
            while(t<8)
            {
                if(dp[t][y]==1)
                {
                    res.push_back({t,y});
                    break;
                }
                t++;
            }
        }
        // right
        if(y+1<8)
        {
            int t = y+1;
            while(t<8)
            {
                if(dp[x][t]==1)
                {
                    res.push_back({x,t});
                    break;
                }
                t++;
            }
        }
        if(y-1>=0)
        {
            int t = y-1;
            while(t>=0)
            {
                if(dp[x][t]==1)
                {
                    res.push_back({x,t});
                    break;
                }
                t--;
            }
        }
        // right up
        if(x!=0 && y!=7)
        {
            int x1=x-1;
            int y1 = y+1;
            while(x1>=0 && y1<8)
            {
                if(dp[x1][y1]==1)
                {
                    res.push_back({x1,y1});
                    break;
                }
                x1--;
                y1++;
            }
        }
        // right down
        if(x!=7 && y!=7)
        {
            int x1=x+1;
            int y1 = y+1;
            while(x1<8 && y1<8)
            {
                if(dp[x1][y1]==1)
                {
                    res.push_back({x1,y1});
                    break;
                }
                x1++;
                y1++;
            }
        }
        // left up
        if(x!=0 && y!=0)
        {
            int x1=x-1;
            int y1 = y-1;
            while(x1>=0 && y1>=0)
            {
                if(dp[x1][y1]==1)
                {
                    res.push_back({x1,y1});
                    break;
                }
                x1--;
                y1--;
            }
        }
        //left down
        if(x!=7 && y!=0)
        {
            int x1=x+1;
            int y1 = y-1;
            while(x1<8 && y1>=0)
            {
                if(dp[x1][y1]==1)
                {
                    res.push_back({x1,y1});
                    break;
                }
                x1++;
                y1--;
            }
        }
        return res;
        
    }
};
