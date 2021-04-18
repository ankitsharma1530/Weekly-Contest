class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& mat, int tar) {
        int m=mat.size();
        int n=mat[0].size();
        
        for(int row=0;row<m;row++)
            for(int col=1;col<n;col++)
                mat[row][col]+=mat[row][col-1];
        
        int count=0;
        
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                
                unordered_map<int,int> umap;
                umap[0]=1;
                int sum=0;
                for(int row=0;row<m;row++){
                    sum+=mat[row][j]-(i>0?mat[row][i-1]:0);
                    if(umap.find(sum-tar)!=umap.end())
                        count+=umap[sum-tar];
                    umap[sum]++;
                }
            }
        }
        
        return count;

    }
};
