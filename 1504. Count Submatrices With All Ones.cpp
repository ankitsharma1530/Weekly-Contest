class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {
        int n= mat.size();
        int m = mat[0].size();
        int arr[n][m];
        for(int i=0;i<n;i++)
        {
            int counter = 0;
            for(int j=m-1;j>=0;j--)
            {
                if(mat[i][j] ==0)
                {
                    counter= 0;
                }
                else
                {
                    counter++;
                }
                arr[i][j] = counter;
            }
        }
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int min_depth = INT_MAX;
                for(int k=i;k<n;k++)
                {
                    min_depth = min(min_depth,arr[k][j]);
                    ans = ans + min_depth;
                }
            }
        }
        return ans;
    }
};
