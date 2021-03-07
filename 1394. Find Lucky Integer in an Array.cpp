class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>ump;
        for(int i=0;i<arr.size();i++)
        {
            ump[arr[i]]++;
        }
        int res = INT_MIN ;
        for(auto it=ump.begin();it!=ump.end();it++)
        {
            if(it->second==it->first)
            {
                res = max(res,it->first);
            }
        }
        if(res==INT_MIN)
        {
            return -1;
        }
        return res;
    }
};
