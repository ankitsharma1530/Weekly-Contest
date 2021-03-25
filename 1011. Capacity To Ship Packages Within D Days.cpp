class Solution {
public:
    // alocation minimum number of pages
    bool isvalid(vector<int>& weights,int D,int mid)
    {
        int d = 1;
        int d_sum=0;
        for(int i=0;i<weights.size();i++)
        {
            if(mid<weights[i])
            {
                return false;
            }
            if(d_sum+weights[i]>mid)
            {
                d++;
                d_sum=weights[i];
                if(d>D)
                {
                    return false;
                }
            }
            else
            {
                d_sum=d_sum+weights[i];
            }
        }
        return true;
    }
    int shipWithinDays(vector<int>& weights, int D) {
        int res = INT_MAX;
        int low = 0;
        int high = 0;
        for(int i=0;i<weights.size();i++)
        {
            high=high+weights[i];
        }
        while(low<=high)
        {
            int mid = low+(high-low)/2;
            if(isvalid(weights,D,mid)==true)
            {
                res = min(res,mid);
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return res;
    }
};
