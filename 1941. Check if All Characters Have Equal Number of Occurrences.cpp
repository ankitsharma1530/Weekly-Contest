class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>ump;
        for(auto x:s){
            ump[x]++;
        }
        unordered_set<int>st;
        for(auto x:ump){
            st.insert(x.second);
            if(st.size()>1){
                return false;
            }
        }
        return true;
    }
};
