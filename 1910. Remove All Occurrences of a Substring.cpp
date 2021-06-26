class Solution {
public:
    string removeOccurrences(string str, string pattern) {
        stack<char> st;
        int n= str.length();
        int m = pattern.length();
        for (int i = 0; i < n; i++) {
            st.push(str[i]);
            if (st.size() >= m) {
                string l = "";
                for (int j = m - 1; j >= 0; j--) {
                    if (pattern[j] != st.top()) {
                        int f = l.size()-1;
                        while (f>=0) {
                            st.push(l[f]);
                            f--;
                        }
                        break;
                    }
                    else {
                        l =  l+st.top();
                        st.pop();
                    }
                }
            }
        }
        string res = "";
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
