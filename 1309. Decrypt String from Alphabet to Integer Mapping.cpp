class Solution {
public:
    string freqAlphabets(string s) {
        unordered_map<int,char>ump;
        for(int i=0;i<26;i++)
        {
            ump[i+1] = i+'a';
        }
        int n = s.length();
        int i=0;
        string res = "";
        while(i<n)
        {
            if(i>n-3)
            {
                int num = s[i]-'0';
                res.push_back(ump[num]);
                i++;
            }
            else
            {
            if(s[i+2]=='#')
            {
                string temp = s.substr(i,i+2);
                int num = stoi(temp);
                res.push_back(ump[num]);
                i=i+3;
            }
            else
            {
                int num = s[i]-'0';
                res.push_back(ump[num]);
                i++;
            }
            }
            
        }
        return res;
    }
};
