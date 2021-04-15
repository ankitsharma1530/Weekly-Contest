class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int>ump;
        for(int i=0;i<chars.length();i++)
        {
            ump[chars[i]]++;
        }
        int res = 0;
        for(auto x:words)
        {
            bool flag = true;
            unordered_map<char,int>temp = ump;

            for(int i=0;i<x.length();i++)
            {
                if(temp[x[i]]>0)
                {
                    temp[x[i]]--;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
            {
                res=res+x.length();
            }
        }
        return res;
    }
};
