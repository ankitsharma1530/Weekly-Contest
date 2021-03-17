class Solution {
public:
    vector<string> printVertically(string s) {
        vector<string>res;
        string temp = "";
        int len = 0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=' ')
            {
                temp.push_back(s[i]);
            }
            else
            {
                // len = max(len,temp.length());
                if(len<temp.length())
                {
                    len = temp.length();
                }
                res.push_back(temp);
                temp="";
            }
        }
        // len = max(len,temp.length());
        if(len<temp.length())
        {
            len = temp.length();
        }
        res.push_back(temp);
        
        
        vector<string>ans;
        
        int i = 0;
        int n = res.size();
        int ind = 0;
        while(i<len)
        {
            string new_str = "";
            for(int j=0;j<n;j++)
            {
                string curr = res[j];
                if(ind>=curr.length())
                {
                    new_str.push_back(' ');
                }
                else
                {
                    new_str.push_back(curr[ind]);
                }
            }
            while(new_str[new_str.length()-1]==' ')
            {
                new_str.pop_back();
            }
            ans.push_back(new_str);
            ind++;
            i++;
        }
        return ans;
    }
};
