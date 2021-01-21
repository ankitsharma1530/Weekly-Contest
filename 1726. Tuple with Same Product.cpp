class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int,int>ump;
        int ans = 0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                int prod = nums[i]*nums[j];
                ump[prod]++;
            }
        }
        for(auto m:ump)
        {
            int check = m.second;
            ans = ans + ((check-1)*check)/2;
        }
        return ans*8;
    }
};
