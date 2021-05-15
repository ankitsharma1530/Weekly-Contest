class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<char>>res(m,vector<char>(n));
        for(int i=0;i<n;i++)
        {
            int last = m;
            for(int j=m-1;j>=0;j--)
            {
                if(matrix[i][j]=='#')
                {
                    matrix[i][last-1] = '#';
                    // if last-1 is not matching 
                    // it means that our box will fall
                    if(last-1!=j)
                    {
                        matrix[i][j] = '.';
                    }
                    last=last-1;
                }
                else if(matrix[i][j]=='*')
                {
                    last = j;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                res[j][n-i-1] = matrix[i][j];
            }
        }
        return res;
    }
};
