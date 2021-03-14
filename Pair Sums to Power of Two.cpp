int solve(vector<int>& nums) {
    unordered_map<int,int>ump;
    for(int i=0;i<nums.size();i++)
    {
        ump[nums[i]]++;
    }
    int n = nums.size();
    int count=0;
    // we will check for every power of 2
    for(int i=0;i<32;i++)
    {
        int num = pow(2,i);
        for(int i=0;i<n;i++)
        {
            count = count + ump[num-nums[i]];
            if(num-nums[i]==nums[i])
            {
                count--;
            }
        }
    }
    return count/2;
}
