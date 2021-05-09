class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        map<int,int>ump;
        for(auto x:logs)
        {
            for(int j=x[0];j<x[1];j++)
            {
                ump[j]++;
            }
        }
        int res = -1;
        int year = 0;
        for(auto& x:ump)
        {
            if(x.second>res)
            {
                res=x.second;
                year = x.first;
            }
        }
        return year;
    }
};
