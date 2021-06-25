class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int x=0,y=0,z=0;
        vector<int> v;
        bool up=true;
        int n=mat.size(),m=mat[0].size();
        while(z < n*m){
            int i=x,j=y;
            if(up){   
                while(i>=0 && j<m){
                    z++;
                    v.push_back(mat[i][j]);
                    i--;j++;
                }                
                if(j>=m){
                    y=j-1;
                    x=i+2;
                }
                else{
                    y=j;
                    x=i+1;
                }
                up=false; 
            }else{
                while(j>=0 && i<n){
                    z++;
                    v.push_back(mat[i][j]);
                    i++;j--;
                }
                if(i>=n){
                    x=i-1;
                    y=j+2;
                }
                else{
                    x=i;
                    y=j+1;
                }
                up=true;
            }            
        }
        return v;
    }
};
