class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int res_len = 0;
        int first0ind = -1;
        int neg_count = 0;
        int first_neg_ind = -1;
        bool flag = false;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                neg_count = 0;
                first0ind = i;
                first_neg_ind = -1;
                flag = false;
            }
            else
            {
                if(nums[i]<0)
                {
                    neg_count++;
                    if(flag==false)
                    {
                        first_neg_ind = i;
                        flag = true;
                    }
                }
                if(neg_count%2==0)
                {
                    res_len = max(res_len,i-first0ind);
                }
                else
                {
                    res_len = max(res_len,i-first_neg_ind);
                }
            }
            
        }
        return res_len;
    }
};
