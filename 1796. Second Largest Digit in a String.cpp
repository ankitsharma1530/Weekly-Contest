class Solution {
public:
    static bool comp(char a,char b)
    {
        return a>b;
    }
    int secondHighest(string s) {
        string temp = "";
        for(int i=0;i<s.length();i++)
        {
            if(isdigit(s[i]))
            {
                temp.push_back(s[i]);
            }
        }
        sort(temp.begin(),temp.end(),comp);
        int m = temp[0]-'0';
        for(int i=1;i<temp.length();i++)
        {
            if(temp[i]-'0'<m)
            {
                return temp[i]-'0';
            }
        }
        return -1;
    }
};
