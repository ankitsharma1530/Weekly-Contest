class Solution {
public:
    vector<int> sumZero(int n) {
        if(n==1)
        {
            return {0};
        }
        vector<int>res;
        if(n%2==0)
        {
            int mid = n/2;
            for(int i=1;i<=mid;i++)
            {
                res.push_back(i);
                res.push_back(0-i);
            }
        }
        else
        {
            res.push_back(0);
            n=n-1;
            int mid = n/2;
            for(int i=1;i<=mid;i++)
            {
                res.push_back(i);
                res.push_back(0-i);
            }
            
        }
        return res;
    }
};
