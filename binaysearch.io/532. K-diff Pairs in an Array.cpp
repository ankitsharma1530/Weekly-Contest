class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int x: nums) m[x]++;
        int ans=0;
        if(k==0)
        {
            for(auto x: m) if(x.second>1) ans++;
        }
        else
        {
            for(auto x: m)
            {
                if(m.count(x.first + k) > 0) ans++; 
            }
        }
        return ans;
    }
};
