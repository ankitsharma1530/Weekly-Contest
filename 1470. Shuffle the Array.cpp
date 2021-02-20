class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>res;
        int i1=0;
        int i2 = n;
        while(i1<n && i2<nums.size())
        {
            res.push_back(nums[i1]);
            res.push_back(nums[i2]);
            i1++;
            i2++;
        }
        return res;
    }
};
