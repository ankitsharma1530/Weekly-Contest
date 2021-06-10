bool solve(vector<int>& nums, int k) {
    
    sort(nums.begin(),nums.end());
    int n = nums.size();
        for (int i = 0; i < n - 2; i++) {
            int low = i + 1, high = n - 1;
            int sum = k - nums[i];
            while (low < high) {
                if (nums[low] + nums[high] == sum)
                    return true;
                else if (nums[low] + nums[high] > sum)
                    high--;
                else
                    low++;
            }
        }
        return false;
}
