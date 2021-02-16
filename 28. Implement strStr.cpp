class Solution {
public:
    void solve(vector<int>& lps, string needle , int n)
    {
        int i=1;
        int j = 0;
        lps[0] = 0;
        while(i<n)
        {
            if(needle[i]==needle[j])
            {
                j++;
                lps[i] = j;
                i++;
            }
            else
            {
                if(j==0)
                {
                    lps[i]=0;
                    i++;
                }
                else
                {
                    j = lps[j-1];
                }
            }
        }
    }
    int strStr(string haystack, string needle) {
        int m = haystack.length();
        int n = needle.length();
        if(n>m)
        {
            return -1;
        }
        if(n==0)
        {
            return 0;
        }
        if(m==0 && n==0)
        {
            return 0;
        }
        //create LPS
        vector<int>lps(n);
        solve(lps,needle,n);
        int i=0;
        int j=0;
        while(i<m)
        {
            if(haystack[i]==needle[j])
            {
                i++;
                j++;
            }
            if(j==n)
            {
                return i-n;
            }
            if(i<m && needle[j]!=haystack[i])
            {
                if(j!=0)
                {
                    j = lps[j-1];
                }
                else
                {
                    i++;
                }
            }
        }
        return -1;
    }
};
