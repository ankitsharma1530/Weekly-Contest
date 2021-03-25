class Solution {
public:
    bool isvalid(int mid, vector<int>& bloomDay, int m, int k)
    {
        int bots = 0;
        int cons = 0;
        for(int i=0;i<bloomDay.size();i++)
        {
            if(bloomDay[i]<=mid)
            {
                cons++;
            }
            else
            {
                cons=0;
            }
            if(cons==k)
            {
                bots++;
                cons=0;
            }
        }
        if(bots>=m)
        {
            return true;
        }
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(m*k>bloomDay.size())
        {
            return -1;
        }
        int low = 0;
        int high = *max_element(bloomDay.begin(),bloomDay.end());
        int res = INT_MAX;
        // cout<<res;
        while(low<=high)
        {
            int mid = low+(high-low)/2;
            if(isvalid(mid,bloomDay,m,k))
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
