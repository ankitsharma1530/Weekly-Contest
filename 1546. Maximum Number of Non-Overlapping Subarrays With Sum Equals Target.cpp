class Solution {
public:
    int maxNonOverlapping(vector<int>& nums, int target) {
        // same as the sum subarray problems but the difference is between the over lap condn
        // hence we are going to use a var Prev_ind
        // this will trace the previous index upto which we are getting the desired res
        int sum = 0 ;
        unordered_map<int,int>ump;
        ump[0]=-1;
        int res = 0 ;
        //int ans = 0 ;
        int prev_ind = INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            sum = sum+nums[i];
            if(ump.find(sum-target)!=ump.end() && prev_ind<=ump[sum-target])
            {
                
                res++;
                prev_ind = i;
            }
            ump[sum] = i;
            //res = max(res,ans);
        }
        return res;
        
    }
};
