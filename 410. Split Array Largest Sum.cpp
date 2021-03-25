class Solution {
public:
    bool isvalid(int mid, vector<int>&nums , int m)
    {
        int M=1;
        int M_sum = 0;
        for(int i=0;i<nums.size();i++)
        {
            //base condn
            if(nums[i]>mid)
            {
                return false;
            }
            if(M_sum+nums[i]>mid)
            {
                M++;
                M_sum = nums[i];
                if(M>m)
                {
                    return false;
                }
            }
            else
            {
                M_sum = M_sum+nums[i];
            }
        }
        return true;
    }
    int splitArray(vector<int>& nums, int m) {
        int res = INT_MAX;
        int low = 0;
        int high = 0;
        for(int i=0;i<nums.size();i++)
        {
            high=high+nums[i];
        }
        while(low<=high)
        {
            int mid = low+(high-low)/2;
            if(isvalid(mid,nums,m)==true)
            {
                res = min(res,mid);
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return res;
    }
};
