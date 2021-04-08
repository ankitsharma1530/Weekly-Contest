class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int start = 0;
        double  ans = 0;
        for(auto c:customers)
        {
            // chck wether our chef is free or not
            start = max(start,c[0]);
            // updating start for the next customer
            start = start+c[1];
            ans=ans+start-c[0];
        }
        return ans/customers.size();
    }
};
