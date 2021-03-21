class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int max_sum = 0;
        int current_sum = nums[0] ;
        int n = nums.size();
        for (int i=1; i<n ; i++ )
        {
            if (nums[i-1] < nums[i])
                current_sum = current_sum + nums[i];

            else 
            {
                max_sum = max(max_sum, current_sum);
                current_sum = nums[i];
            }
        }
        return max(max_sum, current_sum);
    }
};
