class Solution {
public:
    int arraySign(vector<int>& nums) {
        unordered_map<int,int>ump;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                ump[1]++;
            }
            else if(nums[i]<0)
            {
                ump[-1]++;
            }
            else
            {
                ump[0]++;
            }
        }
        if(ump.find(0)!=ump.end())
        {
            return 0;
        }
        if(ump.find(-1)!=ump.end())
        {
            if(ump[-1]%2!=0)
            {
                return -1;
            }
        }
        return 1;
    }
};
