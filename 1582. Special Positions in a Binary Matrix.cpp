class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int res = 0;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==1)
                {
                    int first_count = 0;
                    for(int ii=0;ii<mat.size();ii++)
                    {
                        if(mat[ii][j]==1)
                        {
                            first_count++;
                        }
                    }
                    int sec_count = 0 ;
                    for(int jj=0;jj<mat[0].size();jj++)
                    {
                        if(mat[i][jj]==1)
                        {
                            sec_count++;
                        }
                    }
                    if(sec_count==1 && first_count==1)
                    {
                        res++;
                    }
                }
            }
        }
        return res;
        
    }
};
