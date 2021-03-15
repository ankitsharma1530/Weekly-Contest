class Solution {
public:
    static bool comp(pair<int,int>a,pair<int,int>b)
    {
        if(a.second==b.second)
        {
            return a.first<b.first;
        }
        return a.second<b.second;
            
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n = mat.size();
        int m = mat[0].size();
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)
        {
            int count = 0;
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==1)
                {
                    count++;
                }
            }
            v.push_back(make_pair(i,count));
        }
        sort(v.begin(),v.end(),comp);
        vector<int>res;
        int i=0;
        while(k--)
        {
            res.push_back(v[i].first);
            i++;
        }
        return res;
    }
};
