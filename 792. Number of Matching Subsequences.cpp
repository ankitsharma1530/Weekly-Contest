class Solution {
public:
    // time complexity -> O(l+nlogl)
    // O(l) -> this is for constructig the map
    // and O(nlogl) -> this is for binary search for n times
    int numMatchingSubseq(string s, vector<string>& words) {
        unordered_map<char,vector<int>>ump;
        for(int i=0;i<s.length();i++){
            ump[s[i]].push_back(i);
        }
        int count = 0;
        for(auto& x:words){
            int latest = -1;
            bool found = true;
            for(auto& ch:x){
                auto it = upper_bound(ump[ch].begin(),ump[ch].end(),latest);
                if(it==ump[ch].end()){
                    found = false;
                    break;
                }
                latest = *it;
            }
            if(found){
                count++;
            }
        }
        return count;
    }
};
