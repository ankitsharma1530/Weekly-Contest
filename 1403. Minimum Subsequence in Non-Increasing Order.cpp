class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum = 0;
        for(int i=0;i<nums.size();i++)
        {
            sum = sum+nums[i];
        }
        int check = sum/2;
        int s = 0;
        vector<int>res;
        for(int i=nums.size()-1;i>=0;i--)
        {
        
            if(s>check)
            {
                break;
            }
            else
            {
                res.push_back(nums[i]);
            }
            s = s+nums[i];
        }
        return res;
    }
};
