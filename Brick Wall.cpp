class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        unordered_map<int,int>ump;
        for(int i=0;i<wall.size();i++)
        {
            int s = 0;
            for(int j=0;j<wall[i].size();j++)
            {
                s+=wall[i][j];
                ump[s]++;
            }
        }
        int c = 0;
        for(int i=0;i<wall[0].size();i++)
        {
            c+=wall[0][i];
        }
        int res = 0;
        for(auto it=ump.begin();it!=ump.end();it++)
        {
            // cout<<it->first<<" "<<it->second;
            // cout<<endl;
            if(it->second>res && it->first!=0 && it->first!=c)
            {
                res = it->second;
            }
        }
        return wall.size()-res;
    }
};
