class Solution {
public:
    int maxPower(string s) {
        char temp = s[0];
        int res = 1;
        int count = 1;
        for(int i=1;i<s.length();i++)
        {
            if(temp==s[i])
            {
                count++;
            }
            else
            {
                res = max(count,res);
                count = 1;
                temp  = s[i];
            }
        }
        res = max(count,res);
        return res;
    }
};
