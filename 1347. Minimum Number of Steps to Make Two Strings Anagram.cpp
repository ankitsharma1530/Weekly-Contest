class Solution {
public:
    int minSteps(string s, string t) {
        // bab - abb
        // aba = aab
        unordered_map<char,int>ump;
        
        // int count = 0;
         for(int i=0;i<s.length();i++)
         {
             ump[s[i]]++;
         }
         for(int i=0;i<t.length();i++)
         {
             ump[t[i]]--;
         }
        int cou = 0;
        for(auto i=ump.begin();i!=ump.end();i++)
        {
            if(i->second>0)
            cou = cou+i->second;
        }
        return cou;
}
};
