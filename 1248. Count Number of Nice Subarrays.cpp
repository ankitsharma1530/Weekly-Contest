class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++)
        {
            nums[i] = nums[i]%2;
        }
        unordered_map<int,int>ump;
        int count = 0;
        int curr_sum = 0;
        for(int i=0;i<nums.size();i++)
        {
            curr_sum+=nums[i];
            if(curr_sum==k)
            {
                count++;
            }
            if(ump.find(curr_sum-k)!=ump.end())
            {
                count+=ump[curr_sum-k];
            }
            ump[curr_sum]++;
        }
        return count;
    }
};
