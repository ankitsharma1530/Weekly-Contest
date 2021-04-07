class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st;
        for(int i=0;i<s.length();i++)
        {
            if(st.empty()){
                st.push(make_pair(s[i],1));
            }
            else
            {
                if(st.top().first==s[i])
                {
                    st.push(make_pair(s[i],st.top().second+1));
                }
                else
                {
                    st.push(make_pair(s[i],1));
                }
            }
            if(st.size()>=k)
            {
                if(st.top().second>=k)
                {
                    int k1 = k;
                    while(k1--)
                    {
                        st.pop();
                    }
                }
            }
        }
        string res = "";
        while(!st.empty())
        {
            res.push_back(st.top().first);
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
