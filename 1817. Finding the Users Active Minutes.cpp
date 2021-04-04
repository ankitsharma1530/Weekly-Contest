class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        unordered_map<int,set<int>>ump;
        for(auto x:logs)
        {
            ump[x[0]].insert(x[1]);
        }
        vector<int>res(k,0);
        for(auto it=ump.begin();it!=ump.end();it++)
        {
            if(it->second.size()<=k)
            {
                res[it->second.size()-1]=res[it->second.size()-1]+1;
            }
        }
        return res;
    }
};
