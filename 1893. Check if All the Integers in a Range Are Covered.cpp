class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        vector<int>vis(51,0);
        for(auto x:ranges){
            for(int i=x[0];i<=x[1];i++){
                vis[i]=true;
            }
        }
        for(int i=left;i<=right;i++){
            if(vis[i]==false){
                return false;
            }
        }
        return true;
    }
};
