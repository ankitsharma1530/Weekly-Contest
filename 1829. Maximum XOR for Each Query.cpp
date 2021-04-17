class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        vector<int>res;
        int c = 0;
        for(int i=0;i<nums.size();i++)
        {
            c=c^nums[i];
            res.push_back(c);
        }
        int n = pow(2,maximumBit)-1;
        vector<int>ans;
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]==n)
            {
                ans.push_back(res[i-1]);
            }
            else
            {
                ans.push_back(n-res[i]);
            }
        }
        return ans;
        
    }
};
