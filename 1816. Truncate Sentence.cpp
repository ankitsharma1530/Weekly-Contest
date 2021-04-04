class Solution {
public:
    string truncateSentence(string s, int k) {
        string res = "";
        int count = 0;
        int i=0;
        while(count<k && i<s.length())
        {
            if(s[i]!=' ')
            {
                res=res+s[i];
            }
            else
            {
                res=res+' ';
                count++;
            }
            i++;
        }
         if(res[res.length()-1]==' ')
         {
             res.pop_back();
         }
        return res;
    }
};
