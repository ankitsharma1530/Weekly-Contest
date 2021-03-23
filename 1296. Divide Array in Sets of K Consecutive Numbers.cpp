class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        int size= nums.size();
        if(size%k!=0)
        {
            return false;
        }
        map<int,int>ump;
        for(int i=0;i<size;i++)
        {
            ump[nums[i]]++;
        }
        while(ump.size()>0)
        {
            // find the smallest number from where we have to start our subarray
            int small =  ump.begin()->first;
            // now check for k consecutive numbers
            for(int i=small;i<small+k;i++)
            {
                if(ump.find(i)==ump.end())
                {
                    return false;
                }
                int count = ump[i]-1;
                if(count==0)
                {
                    ump.erase(i);
                }
                else
                {
                    ump[i] = count;
                }
            }
        }
        return true;
    }
};
