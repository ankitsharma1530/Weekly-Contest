class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int pre =-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                if(pre==-1)
                {
                    pre = i;
                }
                else
                {
                    if(i-pre-1<k)
                    {
                        return false;
                    }
                    pre = i; 
                }
            }
            // cout<<pre<<endl;
        }
        return true;
    }
};
