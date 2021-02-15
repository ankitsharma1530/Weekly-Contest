class Solution {
public:
    bool ischeck(int mid, vector<int>& position , int m)
    {
        int count = 1;
        int prev_ind = position[0];
        for(int i=1;i<position.size();i++)
        {
            if(position[i]-prev_ind>=mid)
            {
                count++;
                prev_ind = position[i];
            }
        }
        if(count>=m)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        // perform binary search
        int n = position.size();
        int low = 0;
        int high = position[n-1];
        int res = 0;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(ischeck(mid,position,m))
            {
                res = max(res,mid);
                low=mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
        return res;
    }
};
