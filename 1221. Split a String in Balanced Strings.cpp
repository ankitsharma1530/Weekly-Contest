class Solution {
public:
    int balancedStringSplit(string s) {
        int count = -1;
        stack<char>st;
        for(int i=0;i<s.length();i++)
        {
            if(st.empty())
            {
                count++;
                st.push(s[i]);
            }
            else
            {
                if(s[i]!=st.top())
                {
                    st.pop();
                }
                else
                {
                    st.push(s[i]);
                }
            }
        }
        return count+1;
    }
};
