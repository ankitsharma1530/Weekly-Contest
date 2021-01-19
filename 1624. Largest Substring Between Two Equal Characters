class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char,int>ump;
        int res = -1;
        for(int i=0;i<s.length();i++)
        {
            if(ump.find(s[i])==ump.end())
            {
                ump[s[i]] = i;
            }
            else
            {
                if(i-ump[s[i]]-1>res)
                {
                    res = i-ump[s[i]]-1;
                }
            }
        }
        return res;
    }
};
