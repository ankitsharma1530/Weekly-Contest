class Solution {
public:
    bool isSubsequence(string s, string t) {
        int count = 0;
        int j = 0;
        for(int i=0;i<t.length();i++)
        {
            if(t[i]==s[j])
            {
                count++;
                j++;
            }
        }
        if(count<s.length())
        {
            return false;
        }
        return true;
        
    }
};
