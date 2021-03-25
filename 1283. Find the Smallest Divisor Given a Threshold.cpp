class Solution {
public:
    int solve(vector<int>&nums,int mid)
    {
        int sum = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%mid==0)
            {
                sum=sum+nums[i]/mid;
            }
            else
            {
                sum=sum+((nums[i]/mid)+1);
            }
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int small= 1;
        int high = *max_element(nums.begin(),nums.end());
        while(small<=high)
        {
            int mid = small+(high-small)/2;
            int s = solve(nums,mid);
            // if number is small sum will increase
            if(s>threshold)
            {
                small=mid+1;
            }
            // if number is big sum will decrease
            else
            {
                high = mid-1;
            }
        }
        return small;
    }
};
