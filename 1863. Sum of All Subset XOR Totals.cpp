class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        vector<vector<int>>res;
        int n=nums.size();
        int size  = pow(2,nums.size());
        for(int i =0;i<size;i++)
        {
            vector<int>vec;
            for(int j=0;j<n;j++)
            {
                if(i&(1<<j))
                {
                    vec.push_back(nums[j]);
                }
                
            }
            res.push_back(vec);
        }
        int ans = 0;
        for(auto& x:res)
        {
            if(x.size()!=0)
            {
                int t = 0;
                for(int i=0;i<x.size();i++)
                {
                    t = t^x[i];
                }
                ans+=t;
            }
        }
        return ans;
    }
};
