class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int i=0,len=1;
        multiset<int>m;
        for(int j=0;j<nums.size();j++)
        {
            m.insert(nums[j]);
            while(!m.empty() && *m.rbegin()-*m.begin()>limit)
            {
                m.erase(m.find(nums[i++]));
            }
            len = max(len,j-i+1);
        }
        return len;
    }
};
