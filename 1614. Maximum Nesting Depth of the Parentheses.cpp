class Solution {
public:
    int maxDepth(string s) {
        if(s.length()==0 || s.length()==1)
        {
            return 0;
        }
        int count = 0 ;
        int depth = 0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                count++;
            }
            else if(s[i]==')')
            {
                count--;
            }
            depth = max(depth,count);
        }
        return depth;
    }
};
