class Solution {
public:
    int maxScore(string s) {
        int count_zero = 0;
        int count_one = 0;
        int res = 0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1')
            {
                count_one++;
            }
        }
        for(int i=0;i<s.length()-1;i++)
        {
            
            if(s[i]=='0')
            {
                count_zero++;
            }
            else
            {
                count_one--;
            }
            int ans = count_zero+count_one;
            res=max(res,ans);
        }
        return res;
    }
};
