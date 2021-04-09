class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int>ump;
        for(int i=0;i<26;i++)
        {
            ump[order[i]] = i;
        }
        for(int i=0;i<words.size()-1;i++)
        {
            if(ump[words[i][0]]>ump[words[i+1][0]])
            {
                return false;
            }
            if(ump[words[i][0]]>ump[words[i+1][0]])
            {
                continue;
            }
            if(ump[words[i][0]]==ump[words[i+1][0]])
            {
                int xx=1;
                // int yy=0;
                bool flag = false;
                while(xx<words[i].length() && xx<words[i+1].length())
                {
                    if(ump[words[i][xx]]<ump[words[i+1][xx]])
                    {
                        flag = true;
                        break;
                    }
                    if(ump[words[i][xx]]>ump[words[i+1][xx]])
                    {
                        return false;
                    }
                    xx++;
                }
                if(flag==false)
                {
                    return words[i].size()<=words[i+1].size();
                }
            }
        }
        return true;
    }
};
