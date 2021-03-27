// O(N^3)
class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        vector<vector<bool>>dp(n,vector(m,false));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    for(int ii=0;ii<n;ii++)
                    {
                        if(grid[ii][j]==1 && dp[ii][j]==false && ii!=i) // ii!=-i beacuase we cannot commuicate with our selfs. 
                        {
                            count++;
                            dp[ii][j] = true; 
                            // cout<<"row"<<ii<<j;
                        }
                    }
                    for(int jj=0;jj<m;jj++)
                    {
                        if(grid[i][jj]==1 && dp[i][jj]==false && jj!=j )
                        {
                            count++;
                            dp[i][jj]=true;
                            // cout<<"col"<<i<<jj;
                        }
                    }
                }
                
            }
        }
        return count;
    }
};


// O(N^2)
class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int m = grid.size() , n = grid[0].size();
        vector<int> row(m,0); //to store the count of servers in each row
        vector<int> column(n,0); //to store the count of servers in each column
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++) {
                if(grid[i][j])
                {
                    row[i]++; //there is a server in the ith row
                    column[j]++;//there is a server in the jth column
                }
            }}
        int count =0;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(grid[i][j]==1 && (row[i]>1|| column[j]>1)) //why >1? because there should be atleast 2 servers for communication
                    count++;
        return count;
    }
};
