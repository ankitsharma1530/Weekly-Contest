class Solution {
public:
        int rev(int n)
        {
            int temp = n, re = 0, r;
            while (temp) {

                r = temp % 10;
                re = re * 10 + r;
                temp /= 10;
            }
            return re;
        }
        int countNicePairs(vector<int>& nums) {
        unordered_map<int,int>ump;
        int count =0;
        for(int i=0;i<nums.size();i++)
        {
            int v = nums[i] - rev(nums[i]);
            count=(count+ump[v])%1000000007;
            ump[v]++;
        }
            return count;
    }
};
