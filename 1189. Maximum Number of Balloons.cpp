class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>ump;
        for(int i=0;i<text.length();i++)
        {
            ump[text[i]]++;
        }
        vector<char>v = {'b','a','l','o','n'};
        int res = INT_MAX;
        for(auto x:v)
        {
            if(x=='l' || x=='o')
            {
                res = min(res,ump[x]/2);
            }
            else
            {
                res = min(res,ump[x]);
            }
        }
        return res;
            
    }
};
