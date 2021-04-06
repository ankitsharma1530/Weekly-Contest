class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        unordered_map<int,int>ump;
        for(int i=0;i<arr.size();i++)
        {
            if(ump.find(arr[i]-difference)!=ump.end())
            {
                ump[arr[i]]=ump[arr[i]-difference]+1;
            }
            else
            {
                ump[arr[i]]=1;
            }
        }
        int res = INT_MIN;
        for(auto it=ump.begin();it!=ump.end();it++)
        {
            res = max(res,it->second);
        }
        return res;
    }
};
