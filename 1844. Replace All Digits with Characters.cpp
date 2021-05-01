class Solution {
public:
    string replaceDigits(string s) {
        string res = "";
        char prev = s[0];
        res.push_back(s[0]);
        for(int i=1;i<s.length();i++)
        {
            if(i&1)
            {
                int num  = s[i]-'0';
                char temp = prev+num;
                res.push_back(temp);
            }
            else
            {
                res.push_back(s[i]);
                prev = s[i];
            }
        }
        return res;
            
    }
};
