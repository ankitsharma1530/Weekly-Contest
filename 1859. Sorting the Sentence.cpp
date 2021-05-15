class Solution {
public:
    string sortSentence(string s) {
        map<char,string>ump;
        vector<string>arr;
        string temp = "";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=' ')
            {
                temp.push_back(s[i]);
            }
            else
            {
                arr.push_back(temp);
                temp="";
            }
        }
        arr.push_back(temp);
        for(int i=0;i<arr.size();i++)
        {
            string t = arr[i];
            char c = t[t.length()-1];
            ump[c] = t;
        }
        string res = "";
        for(auto x:ump)
        {
            string st = x.second;
            st = st.substr(0,st.length()-1);
            res+=st;
            res+=" ";
        }
        res.pop_back();
        return res;
    }
};
