class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>res;
        int start = -1;
        int end = -1;
        int i=0;
        int j=nums.size()-1;
        bool flag1=true;
        bool flag2=true;
        while(i<=j &&(flag1 || flag2))
        {
            if(nums[i]==target && flag1)
            {
                start = i;
                flag1=false;
            }
            if(nums[j]==target && flag2)
            {
                end = j;
                flag2=false;
            }
            if(flag1)
            {
                i++;
            }
            if(flag2)
            {
                j--;
            }
            
        }
        res.push_back(start);
        res.push_back(end);
        return res;
        
    }
};
