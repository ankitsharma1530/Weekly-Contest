class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>ump;
        for(int i=0;i<arr.size();i++)
        {
            ump[arr[i]]++;
        }
        unordered_set<int>st;
        for(auto it=ump.begin();it!=ump.end();it++)
        {
            if(st.find(it->second)!=st.end())
            {
                return false;
            }
            st.insert(it->second);
        }
        return true;
    }
};
