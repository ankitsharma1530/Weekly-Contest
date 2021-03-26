class Solution {
public:
    bool isvalid(int mid,vector<int>& piles,int h)
    {
        int H=0;
        for(int i=0;i<piles.size();i++)
        {
            if(piles[i]%mid==0)
            {
                H=H+piles[i]/mid;
            }
            else
            {
                H+=(piles[i]/mid)+1;
                // H++;
            }
        }
        if(H<=h)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int res = INT_MAX;
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());
        while(low<=high)
        {
            int mid = low+(high-low)/2;
            if(isvalid(mid,piles,h)==true)
            {
                res=min(res,mid);
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
