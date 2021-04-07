class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int len = 0;
        int n = s.length();
        vector<int>dp(n);
        for(int i=0;i<s.length();i++)
        {
            dp[i] = abs(s[i]-t[i]);
        }
        cout<<dp[n-1]<<endl;
        int i=0;
        int j=0;
        int sum = 0;
        while(j<n)
        {
            sum=sum+dp[j];
            if(sum<=maxCost)
            {
                len=max(len,j-i+1);
            }
            else
            {
                while(i<=j)
                {
                    sum=sum-dp[i];
                    i++;
                    if(sum<=maxCost)
                    {
                        break;
                    }
                }
            }
            j++;
        }
        
        return len;
    }
};
