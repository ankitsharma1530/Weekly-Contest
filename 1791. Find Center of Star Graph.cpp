class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size()+1;
        unordered_map<int,int>arr;
        for(auto x:edges)
        {
            arr[x[0]]++;
            arr[x[1]]++;
        }
        for(auto it=arr.begin();it!=arr.end();it++)
        {
            if(it->second==n-1)
            {
                return it->first;
            }
        }
        return -1;
    }
};
