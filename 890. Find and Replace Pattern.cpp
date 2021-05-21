class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        string temp = "";
        unordered_map<char,int>s1;
        vector<string>res;
        int count = 1;
        for(int i=0;i<pattern.length();i++)
        {
            if(s1.find(pattern[i])!=s1.end())
            {
                temp+=to_string(s1[pattern[i]]);
            }
            else
            {
                s1[pattern[i]] = count;
                temp+=to_string(count);
                count++;
            }
        }
        for(auto& x:words)
        {
            string temp1 = "";
            unordered_map<char,int>s2;
            int count = 1;
            for(int i=0;i<x.length();i++)
            {
                if(s2.find(x[i])!=s2.end())
                {
                    temp1+=to_string(s2[x[i]]);
                }
                else
                {
                    s2[x[i]] = count;
                    temp1+=to_string(count);
                    count++;
                }
            }
            if(temp1==temp)
            {
                res.push_back(x);
            }
        }
        return res;
    }
};
