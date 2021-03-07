class Solution {
public:
    int minElements(vector<int>& nums, int limit, int goal) {
        long long int sum = 0;
        for(int i=0;i<nums.size();i++)
        {
            sum = sum+nums[i];
        }
          
            long long int res = abs((goal)-(sum));
            if(res%limit==0)
            {
                return (int)(res/limit);
            }
            else
            {
                return (int)((res/limit)+1);
            }
        
        return 0;
    }
};
