class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // operations from left
        int max_profit_if_sell_today = 0;
        int least_upto_now = prices[0];
        vector<int>dp_left(prices.size(),0);
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]<least_upto_now)
            {
                least_upto_now = prices[i];
            }
            max_profit_if_sell_today = prices[i]-least_upto_now;
            if(max_profit_if_sell_today>dp_left[i-1])
            {
                dp_left[i] = max_profit_if_sell_today;
            }
            else
            {
                dp_left[i] = dp_left[i-1];
            }
        }
        
        // operations from right
        int max_profit_if_buy_today = 0;
        int max_upto_now = prices[prices.size()-1];
        vector<int>dp_right(prices.size(),0);
        for(int i=prices.size()-2;i>=0;i--)
        {
            if(prices[i]>max_upto_now)
            {
                max_upto_now = prices[i];
            }
            max_profit_if_buy_today = max_upto_now-prices[i];
            if(max_profit_if_buy_today>dp_right[i+1])
            {
                dp_right[i] = max_profit_if_buy_today;
            }
            else
            {
                dp_right[i] = dp_right[i+1];
            }
        }
        
        int res = 0;
        for(int i=0;i<prices.size();i++)
        {
            res = max(res,dp_right[i]+dp_left[i]);
        }
        return res;
    }
};
