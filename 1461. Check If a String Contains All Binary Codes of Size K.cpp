class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_set<string>st;
        int n = s.length();
        string res="";
        int count = 1;
        for(int i=0;i<k;i++)
        {
            res.push_back(s[i]);
        }
        st.insert(res);
        for(int i=k;i<n;i++)
        {
            res = res.substr(1,res.length())+s[i];
            // cout<<res<<endl;
            if(st.find(res)==st.end())
            {
                count++;
                st.insert(res);
            }
            else
            {
                continue;
            }
            // cout<<count<<endl;
        }
        int check = pow(2,k);
        // cout<<check<<endl;
        if(count==check)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
