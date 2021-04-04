class Solution {
public:
    int minAbsoluteSumDiff(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m_diff = 0;
        int ind = -1;
        for(int i=0;i<n;i++)
        {
            if(abs(nums1[i]-nums2[i])>m_diff)
            {
                m_diff = abs(nums1[i]-nums2[i]);
                ind = i;
            }
        }
        if(ind==-1)
        {
            return 0;
        }
        int num_ind = -1;
        int c = INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(abs(nums2[ind]-nums1[i])<c)
            {
                num_ind = i; 
                c = abs(nums2[ind]-nums1[i]);  
            }
        }
        nums1[ind] = nums1[num_ind];
        
        int res = 0;
        for(int i=0;i<n;i++)
        {
            // cout<<nums1[i];
            res = (res+abs(nums1[i]-nums2[i]))%1000000007;
        }
        // cout<<endl;
        return res;
    }
};
