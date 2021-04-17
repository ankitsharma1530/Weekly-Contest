class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count = 0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<=nums[i-1])
            {
                count=count+nums[i-1]-nums[i]+1;
                nums[i] = nums[i-1]+1;
            }
        }
        // for(int i=0;i<nums.size();i++)
        // {
        //     cout<<nums[i];
        // }
        return count;
    }
};
