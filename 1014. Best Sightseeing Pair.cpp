class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int profit = values[0];
        int prev_ind = 0;
        for(int i=1;i<values.size();i++)
        {
            profit = max(profit,values[i]+values[prev_ind]+prev_ind-i);
            if(values[prev_ind]+prev_ind<values[i]+i)
            {
                prev_ind = i;
            }
        }
        return profit;
    }
}
