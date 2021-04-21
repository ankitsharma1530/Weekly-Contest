class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& d) {
        int count = 0;
        map<vector<int>,int>up;
        for(auto x:d)
        {
            sort(x.begin(),x.end());
            if(up.find(x)!=up.end())
            {
                count+=up[x];
                up[x]++;
            }
            else
            {
                up[x]++;
            }
        }
        return count;
    }
};
