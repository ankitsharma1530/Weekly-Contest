class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int>st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                st.push(i);
            }
            else if(s[i]==')')
            {
                if(st.empty())
                {
                    st.push(i);
                }
                else
                {
                    if(s[st.top()]=='(')
                        st.pop();
                    else
                        st.push(i);
                }
            }
        }
        unordered_set<int>us;
        while(!st.empty())
        {
            // cout<<st.top()<<endl;
            us.insert(st.top());
            st.pop();
        }
        string res = "";
        for(int i=0;i<s.length();i++)
        {
            if(us.find(i)==us.end())
            {
                res.push_back(s[i]);
            }
            else
            {
                // cout<<i<<endl;
                continue;
            }
        }
        return res;
    }
};
