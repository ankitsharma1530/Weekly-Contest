class Solution {
public:
    string generateTheString(int n) {
        if(n==1)
        {
            return "a";
        }
        if(n==2)
        {
            return "ab";
        }
        if(n==3)
        {
            return "abc";
        }
        string res = "";
        if(n%2==0)
        {
            for(int i=0;i<n-1;i++)
            {
                res.push_back('a');
            }
            res.push_back('b');
        }
        else
        {
            for(int i=0;i<n-2;i++)
            {
                res.push_back('a');
            }
            res.push_back('b');
            res.push_back('c');
        }
        return res;
    }
};
