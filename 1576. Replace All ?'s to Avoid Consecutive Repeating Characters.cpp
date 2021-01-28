class Solution {
public:
    string modifyString(string s) {
        int n = s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='?')
            {
                for(int j='a';j<='z';j++)
                {
                    if(i-1>=0 && s[i-1]==j)
                    {
                        continue;
                    }
                    if(i+1<=n && s[i+1]==j)
                    {
                        continue;
                    }
                    s[i] = j;
                    break;
                }
            }
        }
        return s;
    }
};
