class Solution {
public:
    string longestPrefix(string s) {
        int n = s.length();
        int lps[n] ;
        lps[0] = 0;
        int i = 0; 
        int j=1;
        while(j<n)
        {
            if(s[j]==s[i])
            {
                i++;
                lps[j] = i;
                j++;
            }
            else
            {
                if(i==0)
                {
                    lps[j] = 0;
                    j++;
                }
                else
                {
                    i = lps[i-1];
                }
            }
        }
        int x = lps[n-1];
        return s.substr(0,x);
    }
};
