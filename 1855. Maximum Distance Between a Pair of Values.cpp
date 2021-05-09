class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int i = nums1.size()-1;
        int j = nums2.size()-1;
        int res = 0;
        while(i>=0 && j>=0)
        {
            if(nums2[j]>=nums1[i])
            {
                // res = max(res,j-i);
                while(nums2[j]>=nums1[i] && i>=0)
                {
                    if(j-i>res)
                    {
                        res = j-i;
                    }
                    i--;
                    if(i<0)
                    {
                        break;
                    }
                }
                // res = max()
                
            }
            j--;
            // cout<<i<<" "<<j<<endl;
        }
        // cout<<res;
        return res;
        
    }
};
